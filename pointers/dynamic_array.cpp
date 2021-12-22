#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int *arr= new int [n]; //dynamic array where the pointer array points towards a n elemented array dynamically
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
        cout<<arr[i];
    }
    //free up array
    delete [] arr;

    return 0;
}