#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N ,M ; 
    cin >> N ; 
    vector<long long > A(N);
    for(int i=0 ; i<N ; i++)
    { 
        cin >> A[i] ; 
    }
    cin >> M ; 
    int power = pow(2,M) ; 
    
    // removing significant bit 
    for(int i=0 ; i<N ; i++)
    {
        A[i] = A[i]/power ; 
    }
    
    // printing answer 
    
    for(int i=0 ; i<N ; i++)
    {
        cout << A[i] << " " ; 
    }
    return 0 ; 
    
    
}
