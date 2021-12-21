#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

bool compare(int a, int b)
{
    return a>b;
}

int main()
{
    vector <int> v={1,5,2,8,3,9,4};
    
    sort(v.begin(),v.end());
    for(auto x:   v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),compare);
    for(auto x:   v)
    {
        cout<<x<<" ";
    }

}