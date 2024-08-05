#include<iostream>
#include<math.h>
using namespace std;

void solve(int *arr, int x, int n)
{
   int sum= 0;
   for(int i=0;i<n;i++)
   {
      sum+= arr[i] * pow(x,i) ;
   }
   cout<<"sum of polynomial is= "<<sum<<endl;
}

int main()
{
    int arr[]= {2,4,7,1,3,6,9} ;
    int n= sizeof(arr)/sizeof(arr[0]) ;
    int x;
    cout<<"enter the value of x- "<<endl;
    cin>>x ;
    solve(arr,x,n) ;

    return 0;
}