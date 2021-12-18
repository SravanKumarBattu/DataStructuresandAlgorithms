#include<iostream>

using namespace std;

int binarysearch(int arr[],int n,int key);
//binary search is valid for sorted list of numbers only
int main()
{
    int arr[]={1,10,13,15,21,36};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    int pos=binarysearch(arr,n,key);
    if(pos!=-1)
    {
        cout<<"Element is at "<<pos;
    }
    else
    cout<<"NOT PRESENT";
}


int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    
    while(start<end)
    {
        
        int mid=(start+end)/2;

        if(arr[mid]==key)
        {return mid+1;}
        else if(arr[mid]<key)
        {start=mid+1;}
        else
        end=mid-1;

    }
    return -1;
}