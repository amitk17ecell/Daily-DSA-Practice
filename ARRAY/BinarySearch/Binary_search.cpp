#include<iostream>
using namespace std ; 
int BinarySearch(int arr[] , int n , int key) 
{
    int start = 0  , end = n-1 , mid ;
    while(start<=end)
    {
        mid = start + (end-start)/2 ; 
        if(arr[mid] == key )
           return 1 ; 
        else if (arr[mid]< key ) 
           start = mid+1 ; 
        else 
           end = mid-1 ; 

    }
    return -1 ;                 // if element is absent 
}
int main() {
    int arr[1000] ; 
    int n , key ; 
    cout << " enter no. of elements in array" ; 
    cin >> n ; 
    for(int i =0 ; i<n ; i++)
    {
        cin >> arr[i] ; 
    }
    cout << "enter element to find " ; 
    cin >> key  ; 
    cout << BinarySearch(arr , n , key )  ; 
    return 0 ; 
}