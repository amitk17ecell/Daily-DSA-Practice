#include<iostream>
using namespace std ; 
int main ()
{
    int arr[] = {10,12,15,1,4,7,61,4,6,42,3,6,67} ;
    int x = 42 ; 
    int size = sizeof(arr)/sizeof(arr[0]) ; 
    for (int i=0 ; i< size ; i++)
    {
        if (arr[i] == x ) {
            cout <<i ; 
            return 0 ; 
        }
    }
    cout << -1 ; 
    return 0 ; 

}