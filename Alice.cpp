#include<iostream>
using namespace std;
int main()
{
    int L,R,X=0;
    cout<<"enter the L and R";
    cin>>L>>R;
    for(int i=L;i<=R;i++)
    {
        X=X^i;
    }
    cout<<X;
    if(X%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
}
