#include<iostream>
#include<climits>
using namespace std ;
int main ()
{
    int arr[] = {5,14,7,9,16,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = INT_MIN ;
    for(int i=0 ; i< size ; i++)
    {   
        if(ans < arr[i])
        {
            ans = arr[i] ;
        }
         
    }
    cout << ans ; 
}