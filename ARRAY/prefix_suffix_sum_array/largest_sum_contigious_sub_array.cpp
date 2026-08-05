#include<iostream>
#include<vector>
using namespace std ; 

int main() 
{

    vector<int> v = {4,-6,2,8} ;
    int maxi = INT16_MIN ; 
    int n = v.size() ; 
    for(int i=0 ; i<n ; i++)
    {
        int prefix = 0 ; 
        for(int j=i ; j<n ; j++)
        {
            prefix += v[j] ; 
            maxi = max(maxi , prefix) ; 

        }
    }
    cout << " max. sum = " << maxi << endl ; 
}