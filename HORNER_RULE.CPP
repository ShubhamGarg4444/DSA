#include<iostream>
#include<math.h>
using namespace std;

int solve(int *arr, int n, int m, int x)
{
    int ans ;

    // base case
    if(m > n)
    return ans ;

    else{
           return (arr[n-m]*pow(x,n-m) + solve(arr,n,m+1,x)) ;
    }
}

int main()
{
   int arr[5]= {11,13,20,25,38} ;
   int x;
   cout<<"enter value of x= "<<endl;
   cin>>x ;
   int res= solve(arr,5,1,x) ;
   cout<<"Result is= "<<res<<endl;

   return 0;
}