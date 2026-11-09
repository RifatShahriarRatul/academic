#include<iostream>
using namespace std;
int length(string str)
{
    int len=0;
    for(int i=0; str[i] != '\0'; i++ )
    {
        len++;
    }
    return len;
}
// int sub_string(string str)
// {
//     for(int i=1; i < str.size(); i++)
//     {
//         for(int j=0; j <= str.size() - i; j++)
//         {
//             for(int k=0; k < i; k++)
//             {
//                 cout << str[j+k];
//             }
//         }
//     }
// }
int main()
{
    string str;
    cout << "Enter string" << endl;
    cin >> str;
    cout << length(str);
    for(int i=1; i < str.size(); i++)
    {
        for(int j=0; j <= str.size() - i; j++)
        {
            for(int k=0; k < i; k++)
            {
                cout << str[j+k];
            }
            cout << endl;
        }
    }
}