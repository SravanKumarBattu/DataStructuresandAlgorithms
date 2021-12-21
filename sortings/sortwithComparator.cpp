#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){
    return a>b;
}
int main()
{
    int arr[]={1,4,2,5,3,6};
    int n= sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    for(auto x : arr)
    {
        cout<<x;
    }
}