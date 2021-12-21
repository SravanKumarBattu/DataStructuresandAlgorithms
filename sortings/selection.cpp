#include<iostream>
using namespace std;

void selection(int arr[],int n);

int main()
{
    int arr[]={3,5,2,8,4,1,7,6};
    int n=sizeof(arr)/sizeof(int);

    selection(arr,n);

    for(auto x : arr)
    {
        cout<<x<<" ";
    }
}

void selection(int arr[],int n)
{
    //first find out the least item comparing to arr[i] if least swap them
    // last 2 elements at the end will be sorted
    for(int i=0;i<=n-2;i++)
    {
        int min_pos=i;   //assumig minimum pos to be i
        for (int j = i; j < n; j++)
        {
            if (arr[j]<arr[min_pos]) 
            {
                min_pos=j; //finding minimum position and storing from j to min_pos 
            }
            
        }
        swap(arr[min_pos],arr[i]); //swapping the lesser elements at correct place
        
    }

    
}