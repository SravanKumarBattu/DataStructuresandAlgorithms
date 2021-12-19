 #include<iostream>

using namespace std;

void subarrays(int arr[],int n);

int main()
{
    int arr[]={10,20,30,40,50};
    //(10,10)(10,20),(10,30),....(20,20),(20,30),...(30,30),...(50,50)
    int n=sizeof(arr)/sizeof(int);

    subarrays(arr,n);

    return 0;
}

void subarrays(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
         {
            for(int k=i;k<j;k++)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
       

    }
}