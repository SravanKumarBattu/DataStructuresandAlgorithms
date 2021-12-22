#include<iostream>

using namespace std;

int main()
{
    int x=100;
    int *y=&x; //pointer y contains address of x
                // y gives address where as *y gives value of the address

    cout<<"x value is "<<x<<endl<<"x address is"<<&x<<endl<<"y value is "<<y<<endl<<"Deference variable(*y) the value contained in y is address of x that has data 100 is accessed by *y"<<*y;
    
    int &z=x; //reference variable where z&x have 100 as data in it
    z++; //both z & x gets incremented 
    cout<<endl<<"z is "<<z<<" x is "<<x;
    return 0;
}