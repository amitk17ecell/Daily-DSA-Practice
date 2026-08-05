#include<iostream>
#include<vector>
using namespace std ; 

int main() 
{
    vector<int> v = {3,4,-2,5,8,20,-10,8} ; 
    int total_sum =0 , prefix=0  ;
    int n = v.size() ;  
    for(int i=0 ; i<n ; i++)
    {
        total_sum += v[i] ; 
    }
    for(int i=0 ; i< n-1 ; i++)
    {
        prefix += v[i] ;
        if((total_sum - prefix) == prefix) 
        {
             cout << "1" ; 
             return 0; 
        }
    }
    cout << "0" ; 
    return 0 ; 
}