#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> vec= {
        {1,2,3},
        {4,5,6},
        {10,11,2,3,4,55},
    };
    for(int i=0;i<vec.size();i++)
    {
        for(auto x: vec[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
 return 0;
}