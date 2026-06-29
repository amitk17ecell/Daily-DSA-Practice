#include<iostream>
using namespace std ;

int main() 
{
    int arr[] = {10,2,16,8,9,14,53,47} ;    // sample array 
    int size = sizeof(arr)/sizeof(arr[0]) ; 
    int ans = -1  , second = -1 ; 
    for (int i=0 ; i<size ; i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i] ; 
        }
    }
    // now finding second maximum number 
    for(int i=0 ; i<size ; i++)
    {
        if( ans != arr[i] )
        {
            second = max(second ,arr[i]) ; 
        }
    }
    cout << "second largest element is : " << second << endl ; 
}