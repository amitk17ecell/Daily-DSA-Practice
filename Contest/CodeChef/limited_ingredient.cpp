#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int W ; 
    cin >> W ; 
    int N ; 
    cin >> N ; 
    vector<int> A(N) ; 
    for(int i=0 ; i<N ; i++)
    {
        cin >> A[i] ; 
    }
    // edge case if total ingredient is less then the aleast weight 
    int sum = 0 ; 
     for(int i=0 ; i< N ; i++)
     {
         sum += (2*A[i]) ; 
     }
     sort(A.begin(),A.end()) ; 
     if(sum<W)  
       {
           cout << -1 ; 
           return 0 ; 
       }
     int total=0  , item =0 ; 
     for(int i=0 ; i< N ; i++)
     {
        if(total<W)
        {
            total+=A[i] ; 
            item++ ; 
        }
        if(total<W)
        {
            total+=A[i] ; 
            item++ ; 
        }
        if(total>=W) break ; 
     }
     cout << item ; 
     return 0 ;
}
