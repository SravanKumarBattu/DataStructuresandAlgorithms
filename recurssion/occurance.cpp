#include<iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int foccur(int arr[],int n,int k);
int loccur(int arr[],int n,int k);
int alloccur(int arr[],int n,int k);

int main()
{
    int arr[]={2,3,4,5,5,6,7,7,7};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    auto start = high_resolution_clock::now();
    int fpos=foccur(arr,n,k);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    cout<<fpos+1;
    int lpos=loccur(arr,n,k);
    cout<<endl<<lpos+1;
    int num=alloccur(arr,n,k);
    cout<<endl<<num;
    return 0;

}

int foccur(int arr[],int n,int k)
{   
    if(n==0)
        return -1;
    if(arr[0]==k)
        return 0;
    int i =foccur(arr+1,n-1,k);
    if(i!=-1)
    {
        return i+1;
    } 
    return -1;
}

int loccur(int arr[],int n,int k)
{
    if(n==0)
        return -1;
    
    int i=loccur(arr+1,n-1,k);
    if(i==-1){

        if(arr[0]==k)
        {
            return 0;
        }
        else
            return -1;
    }
    else
    {
        return i+1;
    }
}

int alloccur(int arr[],int n,int k)
{
    int ipos=foccur(arr,n,k);
    int jpos=loccur(arr,n,k);
    int occurs=jpos-ipos;
    return occurs+1;
}