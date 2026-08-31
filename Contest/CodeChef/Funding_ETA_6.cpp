#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int X,A,Y,B,D;
    cin >> X >> A >> Y >> B >> D ;
    int x =  X*A ; 
    int y =  Y*B ; 
    if(x+y >= D)
     cout << "YES" ; 
    else 
      cout << "NO" ; 
    return 0 ; 
}
