#include<iostream>
#include<climits>
using namespace std ;

int main () {
    int arr[100];
    int size ;
    cout <<"enter size of an array" ;
    cin >> size ;
    for(int i =0 ; i<size ; i++)
    {
        cin >> arr[i] ;
    }
    int ans = INT_MAX;
    cout << ans << endl ; 
    for(int i =0 ; i< size ; i++)
    {
        if(arr[i]<ans)
        {
            ans = arr[i] ; 
        }
    }
    cout << ans ; 
}