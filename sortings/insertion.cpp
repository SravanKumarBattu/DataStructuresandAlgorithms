#include<iostream>

using namespace std;

void insertionsort(int arr[],int n);

int main ()
{
    int arr[]={1,4,2,6,3,5};
    int n =sizeof(arr)/sizeof(int);
    
    insertionsort(arr,n);

    for(auto x: arr)
    {
        cout<<x<<" ";
    }

}

void insertionsort(int arr[],int n)
{
  //loop
    //we have to insert the element by checking previous element
    //store the element in temp
  //loop
    //checkit with previous i.e arr[pre]>temp
        //if yes then arr[prev+1]=arr[prev]; prev--;
    //insert the element
    //arr[prev+1]=temp;

    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        int prev=i-1;
        while(prev>0 and arr[prev]>temp)
        {
            arr[prev+1]=arr[prev];      //checking for the place of element
            prev--;
        }
        arr[prev+1]=temp; //inserting the temp at correct place
    }
}