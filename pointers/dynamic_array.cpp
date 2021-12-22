#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
//dynamic array where the pointer array points towards a n elemented array dynamically in the secondary memory
//*arr occupies memory in stack of primary memory
    int *arr= new int [n]; 
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
        cout<<arr[i];
    }
    //free up array
    delete [] arr;

    return 0;
}