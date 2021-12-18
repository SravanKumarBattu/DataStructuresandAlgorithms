#include<iostream>

using namespace std;

void sum(int arr[],int n);

int main()
{
    int arr[]={10,20,30,40,50};
    //(10,10)(10,20),(10,30),....(20,20),(20,30),...(30,30),...(50,50)
    int n=sizeof(arr)/sizeof(int);

    sum(arr,n);

    return 0;
}

void sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        //including the number itself(10,10),(20,20),... replace j=i+1 with j=i 
        {
            sum=arr[i]+arr[j];

            cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
        }
    }
}