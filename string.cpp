#include<iostream>
#include<vector>
using namespace std;
int str_src(string str, string sub_str)
{
    for(int i=0; i<=str.size() - sub_str.size(); i++)
    {
        int matched=0;
        for(int j=0; j<sub_str.size(); j++)
        {
            if( str[i+j] == sub_str[j] )
            matched++;
            else break;
        }
        if(matched == sub_str.size())
        return 1;
    }
    return 0;
}
int str_count(string str, string sub_str)
{
    int count=0;
     for(int i=0; i<=str.size() - sub_str.size(); i++)
    {
        int matched=0;
        for(int j=0; j<sub_str.size(); j++)
        {
            if( str[i+j] == sub_str[j] )
            matched++;
            else break;
        }
        if(matched == sub_str.size())
        count++;
    }
    return count;
}
vector <int> index (string str, string sub_str)
{
    vector <int> position;
    if((int)str.size()< (int)sub_str.size())
    return position;
    for(int i=0; i <= (int)str.size() - (int)sub_str.size(); i++)
    {
        int matched=0;
        for(int j=0; j < (int)sub_str.size() ; j++)
        {
            if(str[i+j] == sub_str[j])
            matched++;
        }
        if(matched == (int)sub_str.size())
        position.push_back(i);
    }
    return position;
}
int main()
{
    string str, sub_str;
    cout << "Enter the string" << endl;
    cin >> str;
    cout << "Enter the sub string" << endl;
    cin >> sub_str;
    vector <int> pos = index(str, sub_str);
    if(pos.size() == 0) cout << "Not Found";
    else 
    {
    cout << "Found" << endl;
    cout << pos.size() << " Matches Found" << endl;
    for(int i=0; i < pos.size(); i++)
    {
        cout << pos[i]+1 << " ";
    }
    }
//     if(str_src(str, sub_str)==1)
//     cout << "Found" << endl;
//     else
//     cout << "Not Found";
//     cout << str_count(str, sub_str);
// }