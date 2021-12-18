#include<iostream>
using namespace std;

int peaks(int arr[],int n);

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,4,2,1};
    int n=sizeof(arr)/sizeof(int);

    int pos=peaks(arr,n);
    cout<<"Peak is at position "<<pos+1;
    return 0;
}

int peaks(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else  
        end=mid;
    }
    return start;
}