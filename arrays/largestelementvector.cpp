#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int max=0;
    vector<int> arr={11,2,3,44,5};
    for (int i = 0; i < arr.size(); i++)
    {
         if(arr[i]>max)
         {
             max=arr[i];
         }
    }
    cout<<max;
    
}