#include<iostream>
using namespace std ; 
int main ()
{
    int arr [] = { 10,2,3,47,45,65,7} ; 
    int start = 0 ; 
    int end = sizeof(arr)/sizeof(arr[0])-1; 
    int size = sizeof(arr)/sizeof(arr[0]) ;  
    while(start<end)
    {
        swap(arr[start],arr[end]) ; 
        start ++ ; 
        end -- ; 
    }
    for (int i=0 ; i < size ; i++)
    {
        cout << arr[i] << " " ; 
    }
    return 0 ; 
}