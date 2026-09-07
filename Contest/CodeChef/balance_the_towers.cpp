#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N , K  ; 
    cin >> N >> K ;
    vector<int> A(N) ; 
    for(int i=0 ; i<N ;i++)
    {
        cin >> A[i] ; 
    }
    
    sort(A.begin() , A.end()) ; 
    int ans = A[N-1]-A[0] ; 
    int small = A[0]+K ; 
    int big = A[N-1]-K ; 
    if(small>big)
      swap(small,big) ; 
    for(int i=1 ; i<N-1 ; i++)
    {
        int subtract = A[i]-K ; 
        int add = A[i]+K ; 
        if(subtract >=small || add <= big)
              continue;
        if(big - subtract <= add-small)
            small = subtract ; 
        else 
           big = add ; 
    }
    cout << min(ans , big-small) ; 
    return 0 ; 
}
