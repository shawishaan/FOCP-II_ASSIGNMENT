#include<iostream>
#include<set>
#include<queue>
using namespace std;
int main()
{
int N=5 , A[N]={7,4,4,4,6};
set<int>s(A,A+5);
priority_queue<int>pq;
for(int  x:s){
    pq.push(x);}
int alex=0,bob=0;
bool turn =true;
while(!pq.empty())
{int x=pq.top();
x=pq.pop();
if(turn){
    alex+=x;
}
else{
    bob+=x;
}
turn=!turn;}
if(alex>bob)
cout<<"ALEX WINS";
else
cout<<"BOB WINS";
return 0;}


