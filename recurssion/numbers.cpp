#include<iostream>

using namespace std;

void inum(int n);
void dnum(int n);

int main()
{
    int n;
    cin>>n;
    dnum(n);
    cout<<endl;
    inum(n);
    return 0;

}

void dnum(int n)
{
     
    if(n==0)
        return;
    cout<<n;
    dnum(n-1);
    
}

void inum(int n)
{
    if(n==0)
    {
        return;
    }
    inum(n-1);
    cout<<n;
}