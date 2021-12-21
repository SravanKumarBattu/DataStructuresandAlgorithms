#include<iostream>

using namespace std;

int main()
{
    char str[]={'a','b','v'};

    cout<<str<<endl;

    // char str2[100];
    // char st=cin.get();
    // while(st!='\n')
    // {
    //     cout<<st;
    //  }
    // cout<<str2;
    char str2[100];
    cin.getline(str2,100,'\n');
    cout<<str2;

}