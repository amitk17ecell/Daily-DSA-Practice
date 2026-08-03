#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ; 
 
int main () {
     vector<int>a ; 
     a.push_back(2) ; 
     a.push_back(31) ; 
     a.push_back(12) ; 
     a.push_back(7) ; 
     cout << a[1] << endl ; 
     cout << a.front() << endl ; 
     cout<<a[a.size()-1] << endl ; 
     vector<int> arr; 
     arr = a ;
    for(auto i:arr)
       cout <<i<< " " ; 
    cout << endl ; 
     sort(arr.begin(), arr.end());  // increasing order sorting 
     for(auto it :arr)
      cout << it << " " ; 
     cout << endl ; 

 // searching elements using stl using binary search 
  cout << binary_search(arr.begin() , arr.end() , 13) << endl ; 

//     sort(arr.begin() , arr.end() , greater<int>()) ;  // decreasing order 

//    for(auto it :arr)
//       cout << it << " " ; 
//      cout << endl ;


}