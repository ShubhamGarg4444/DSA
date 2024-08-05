#include<iostream>
using namespace std;

int ballVelocity(int v)
{
    int dip= 0; // it tells us the number of counts when ball drop on floor 
    while(v>0)
    {
       v=v/2 ; // on each drop ball velocity becomes half
       dip++ ; // we increment the dip with 1 as it drops on the floor and till its velocity becomes zero
    }
    cout<<dip<<endl;
}

int main()
{
   int v;
   cout<<"enter the initial velocity of ball before dropping it down= "<<endl;
   cin>>v;
   ballVelocity(v) ;
}