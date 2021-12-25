#include<iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int power(int a,int n);
int power2(int a, int n);

int main()
{
    int a,n;
    cin>>a>>n;

    auto start = high_resolution_clock::now();
    cout<<power(a,n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    auto start2 = high_resolution_clock::now();
    cout<<power2(a,n);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
  
    cout << "Time taken by function: "
         << duration2.count() << " microseconds" << endl;
    
}

int power(int a, int n)
{
    if(n==0)
        return 1;
    int p=a*power(a,n-1);
    
    return p;
}

int power2(int a, int n)
{
    if(n==0)
        return 1;
    
    int p=power(a,n/2);
    int sp=p*p;
    if(n&1)
    {
        return a*sp;
    }
    return sp;
}