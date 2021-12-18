#include<iostream>

using namespace std;
int linearsearch(int arr[],int n,int k);

int main()
{
    int arr[]={1,2,31,44,38};
    int n=sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;
    int pos=linearsearch(arr,n,key);
    if (pos!=-1)
    {
        cout<<"Element is at "<<pos;
    }
    else
    cout<<"NOT Present";
    return 0;
}
int linearsearch(int arr[],int n,int key)
{
     
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
         
    }
    return -1;
         
}