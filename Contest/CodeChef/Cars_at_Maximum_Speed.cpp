#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N ; 
    cin >> N ;
    vector<int> A(N) ;
    for(int i=0 ;i<N ;i++)
    {
        cin >> A[i] ; 
    }
    int car =0 ; 
    int maxi =A[0]; 
    for(int i=0 ; i<N ; i++ )
    {   
        if(A[i]<=maxi)
          {car ++ ; 
           maxi = min(A[i] , maxi ) ; 
          }
          else 
            continue ; 
        
    }
    cout << car ; 
    return 0 ; 
}
