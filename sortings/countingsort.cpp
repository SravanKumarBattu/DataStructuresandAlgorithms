#include<iostream>
#include<vector>
using namespace std;

void countsort(int arr[],int n);

int main()
{
    int arr[]={2,1,2,3,3,4,1,5,6,6,7,};
    int n=sizeof(arr)/sizeof(int);
    countsort(arr,n);
    
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
}

void countsort(int arr[],int n)
{
    int largest=0;
    for(int i=0;i<n;i++)
    {
        largest=max(largest,arr[i]);        
    }
    vector<int> count(largest+1,0);

    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;  //count's index == arrayelement increment the count values 
    }

    //print the multiple element in sorted order
    int j=0;
    for(int i=0;i<largest;i++)
    {
            while (count[i]>0)
            {
                arr[j]=i;
                count[i]--;
                j++;
            }
            
    } 
    
}