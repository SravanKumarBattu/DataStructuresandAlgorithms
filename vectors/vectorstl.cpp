#include<iostream>

using namespace std;

class vectorstl
{
private:
    int cs;
    int ms; 
    int *arr;
public:
    vectorstl()
    {
        cs=0;
        ms=1;
        arr=new int [ms];
    }

    void push_vector(int data)
    {
        //if cs ==ms then cpoy elements from old to new array of double size
        if(cs==ms)
        {
                int *oldarr= arr;
                ms=2*ms;
                arr=new int[ms];
                for (int i = 0; i < ms; i++)
                {
                    arr[i]=oldarr[i];
                }
                //delete old array
            delete [] oldarr;        
        }
        //add elements
        arr[cs]=data;
        cs++;
        
    }

    int pop_vector()
    {
        if(cs>0)
            cs--;
        return cs;
    }
    int front()
    {
        return arr[0];
    }
    // int end()
    // {
    //     return  arr[cs];
    // }
    int atback()
    {
        return arr[cs-1];
    }
    int at(int i)
    {
        return arr[i+1];
    }
    int size()
    {
        return cs;
    }
     
};

int main()
{
    vectorstl vec;
    vec.push_vector(12);
    vec.push_vector(11);
    vec.push_vector(22);
    vec.push_vector(25);
    vec.push_vector(24);
    vec.push_vector(23);
    cout<<vec.front();
    //cout<<vec.end();
    cout<<vec.at(3);
    return 0;
}
