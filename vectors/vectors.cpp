#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    //fill constructor vector intialisation
    vector<int> b(10,0);

    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i];
    }
       cout<<endl;
 
    vector<int> a={1,2,3};

    //push_back element
    a.push_back(10);
    //display
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];

    }
    //pop_back element
    a.pop_back();
    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];

    }

    
    
    
    return 0;
}