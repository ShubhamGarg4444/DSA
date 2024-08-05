#include<iostream>
using namespace std;

void PairSum(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)  // start with i+1 to avoid make pairing with itself
        {
            for(int k=0;k<n;k++) // start from j+1 because we have to check the pair sum of i and j index elements within rest of array elements
            {
                if(arr[i] + arr[j] == arr[k])
                {
                    cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl; 
                }
            }
        }
    }
}

int main()
{
    int arr[]= {1,3,2,6,9,8,5,10} ;
    int n= sizeof(arr)/sizeof(arr[0]) ;
    PairSum(arr,n) ;

    return 0;
}









