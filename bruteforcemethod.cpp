#include<iostream>
using namespace std;
 int gcd(int a,int b)
 {
    int ans=1;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    return ans;
 }
 int main()
 {
    int T;
    cout<<"enter the no of testcases";
    cin>>T;
    while(T--)
    {
        int N,x,y,count=0;
        cout<<"enter the n";
        cin>>N;
        for(x=1;x<=N;x++)
        {
            if(N%x==0)
            {
                y=N/x;
            }
            cout<<x<<","<<y<<endl;
           if(gcd(x,y)==1)
           {
            count++;
           }
           
        }
        cout<<count;
    }
    return 0;
 }