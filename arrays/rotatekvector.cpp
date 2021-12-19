#include<bits/stdc++.h>
using namespace std;

void kRotate(vector<int> a, int k){
    // your code  goes here
   vector<int> v;
    int n = a.size();
    k = k % n;
  
    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
           v.push_back(a[n + i - k]);
       }
       else
       {
           v.push_back(a[i - k]);
       }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
    }
    
}

int main()
{
    vector<int> v ={1,2,3,4,5,6,7,8};
    int k=2;
    kRotate(v,k);
    return 0;

}