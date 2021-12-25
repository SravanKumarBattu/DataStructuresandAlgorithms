#include<iostream>
using namespace std;

bool sorted(int arr[],int n);

int main()
{
    int arr[5]={3,6,2,9,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<sorted(arr,n);
    return 0;
}

bool sorted(int arr[],int n)
{
    if(n==0 or n==1)
        return true;
    if(arr[0]<arr[1] and sorted(arr+1,n-1))
        return true;
    return false;
}