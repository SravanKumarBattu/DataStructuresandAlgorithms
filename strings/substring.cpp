#include<iostream>

using namespace std;

bool isSub(string str1, string str2,int n,int m);

int main()
{
    string str1="acdfr";
    string str2="df";
    int n=str1.length();
    int m=str2.length();
    isSub(str1,str2,n,m)?cout<<"Yes":cout<<"No";
    return 0;
}

bool isSub(string str1, string str2,int n,int m)
{
    int j=0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    // If all characters of str1 were found in str2
    return (j == m);
}
