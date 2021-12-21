#include<iostream>

using namespace std;

int main()
{
    int flag=0;
    string str;
    cin>>str;
    cout<<str;
    int l=0;
    int r=str.length()-1;
while (l<r)
{
    if(str[l++]!=str[r++])
    {
        flag=-1;
        break;
    }
}
if(flag==-1)
{
    cout<<"Not a Palindrome"<<endl;
}
cout<<"Palindrome"<<endl;
}