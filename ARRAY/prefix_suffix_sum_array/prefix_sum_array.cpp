#include<iostream>
#include<vector>
using namespace std ; 

int main()
{
    vector<int> arr = {4,2,5,-3,6,7} ; 
    int n = arr.size() ; 
    vector<int> prefix(n) ;
    prefix[0] = arr[0] ;  
    for(int i=1 ; i<n ; i++)
    {
        prefix[i] = prefix[i-1] + arr[i] ;  
    }
    // printing 
    for(int i=0 ; i<n ; i++)
    {
        cout << prefix[i]  << " "; 
    }
    return 0 ;
}