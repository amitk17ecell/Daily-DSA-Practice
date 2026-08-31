#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N ; 
    cin >> N ; 
    vector<int> a(N) ; 
    for(int i=0 ; i<N ; i++)
    {
       cin >> a[i] ;  
    }
    int X ; 
    cin >> X ; 
    int count = 0 , index  ; 
    for(int i=0 ;i<N ; i++)
    {
        if(a[i]==X)
          {
              count ++ ; 
          }
        if(count == 2)
         { index = i ;
           break ; }
    }
    
    if(count == 0)
      cout << -1 ; 
    else if(count == 1)
       cout << -2 ; 
    else if (count >=2)
        cout << index ;
    return 0 ; 
}
