#include<iostream>
#include<cmath>
using namespace std;
int mod = 1000000007;
int Power(int a, int b)
{
    int res = 1;
    for(int i=1;i<=b;i++)
    {
        res = (res * a)%mod;
    }
    return res;
}
int str_src(string str, string sub_str)
{
    int hash_sub=0;
    for(int i=0; i < sub_str.size(); i++)
    {
        hash_sub= ((hash_sub*26)%mod + (sub_str[i] - 'A' + 1)%mod)%mod;
    }
    int hash = 0;
    for(int j=0; j < sub_str.size(); j++)
    {
        hash = ((hash*26)%mod + (str[j] - 'A' + 1)%mod)%mod;
    }
    if(hash == hash_sub)
        return 1;
    for(int k=1; k <= str.size() - sub_str.size(); k++)
    {
        hash = ((hash*26)%mod + (str[k+sub_str.size()-1] - 'A' + 1)%mod - (str[k-1] - 'A' + 1)%mod*Power(26, sub_str.size())%mod)%mod;
        if(hash == hash_sub)
            return 1;
    }
    
    return 0;
}
int main()
{
    string str, sub_str;
    cout << "Enter string" << endl;
    cin >> str;
    cout << "Enter sub_string" << endl;
    cin >> sub_str;
    if(str_src(str, sub_str) == 0) cout << "Not Found";
    else cout << "Found";
}