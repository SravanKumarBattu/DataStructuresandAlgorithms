 #include<iostream>

using namespace std;

void maxsubarraysum(int arr[],int n);
void maxsubarraysum2(int arr[],int n);
void maxsubarraysum3(int arr[],int n);

int main()
{
    int arr[]={10,-20,-30,40,50};
    //(10,10)(10,20),(10,30),....(20,20),(20,30),...(30,30),...(50,50)
    int n=sizeof(arr)/sizeof(int);

    maxsubarraysum(arr,n);
    maxsubarraysum2(arr,n);
    maxsubarraysum3(arr,n);
    return 0;
}
//Bruteforce o(N3)
void maxsubarraysum(int arr[],int n)
{
     int maxsum=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
         {
           
            for(int k=i;k<j;k++)
            {    
                int sum=sum+arr[k];
                maxsum=max(maxsum,sum);
            }
             
        }
       

    }
    cout<<maxsum;
}

void maxsubarraysum2(int arr[],int n)
{
    int carr[n];
    carr[0]=arr[0];
    
    for(int i=1;i<n;i++)
    {
        carr[i]=carr[i-1]+arr[i];
    }

    int maxsum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum= i>0?carr[j]-carr[i-1]:carr[j];
            maxsum=max(sum,maxsum);
        }
        
    }
    cout<<maxsum;
}

void maxsubarraysum3(int arr[],int n)
{
    int cs=0;
    int maxsum=0;

    for (int i = 0; i < n; i++)
    {
        cs=cs+arr[i];
        if(cs<0)
        {
            cs=0;
        }
        maxsum=max(cs,maxsum);
    }
    cout<<maxsum;
    
}