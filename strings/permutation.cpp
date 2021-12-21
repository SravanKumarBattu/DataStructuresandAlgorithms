#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,str2;
    int flag=0;
    cout<<"Enter string 1: "<<endl;
    cin>>str;
    cout<<"2nd string : ";
    cin>>str2;
    int n1= str.length();
    int n2= str2.length();
    if(n1!=n2)
    {
        cout<<"No";
    }
     
    sort(str.begin(),str.end());
    cout<<str<<endl;

    sort(str2.begin(),str2.end());
    cout<<str2<<endl;
    for(int i=0;i<n1;i++)
    {
        if(str[i]!=str2[i])
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
if(flag==0)
{
    cout<<"No";
}
else
{
    cout<<"Yes";
}
    return 0; 
}