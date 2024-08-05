#include<iostream>
using namespace std;

void MissingElement(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int lsb1= arr[i] &1 ;  // if LSB comes 1, it means number is an odd number, else if it comes 0 it means number is an even number
        int lsb2= arr[i+1] &1 ;
        if(lsb1 == lsb2)
        {
            cout<< (arr[i] + arr[i+1])/2 ;
        }
    }
}

int main()
{
   int arr[6] ={100,101,102,104,105,106} ;
   MissingElement(arr,6) ;
   
   return 0;
}