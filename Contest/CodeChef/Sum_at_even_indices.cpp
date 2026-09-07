#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N   ;
    long long K , sum=0; 
    cin >> N >> K ; 
    vector<long long > A(N) ; 
    for(int i=0 ; i<N ; i++) 
    {
       cin >> A[i] ; 
    }
    
    for(int i=0 ; i<N ; i+=2)
    {
        if(A[i] > (2*K))
          sum += A[i] ;  
        else 
          continue ; 
    }
    
    cout << sum ; 
    return 0 ; 
}