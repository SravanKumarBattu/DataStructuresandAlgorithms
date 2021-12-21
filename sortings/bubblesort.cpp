#include<iostream>

using namespace std;

void bubble(int arr[],int n);

int main()
{
    int arr[]={1,3,2,6,4,9,5};
    int n=sizeof(arr)/sizeof(n);
    bubble(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}