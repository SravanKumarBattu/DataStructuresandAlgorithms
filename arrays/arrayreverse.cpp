#include<iostream>

using namespace std;

void reverse(int arr[],int n);

int main()
{
    int arr[]={10,11,13,41,51};
    int n = sizeof(arr)/sizeof(int);
    reverse(arr,n);
    return -1;
}

void reverse(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    
}