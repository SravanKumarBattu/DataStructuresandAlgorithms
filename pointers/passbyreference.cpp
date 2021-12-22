#include<iostream>
using namespace std;

void adder(int & number);

int main()
{
    int num=100;
    // num=num+1;
    adder(num);
    cout<<num;
    //manipulating any thing will affect the data
    return 0;
}

void adder(int &x)
{
    //created a copy of variable num i.e. "X"
    x=x+1;
    cout<<x;

}