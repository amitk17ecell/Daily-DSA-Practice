#include<iostream>
#include<vector>
using namespace std ; 

int main() 
{ 
    vector<int>v ; 
    vector<int>v1(5,1) ; 
    v.push_back(1) ; 
    v.push_back(2) ; 
    v.push_back(10) ; 
    v.push_back(11) ; 
    v.push_back(15) ;
    v1.push_back(8) ; 


    // size and capacity 
    cout << "size of vector " << v.size()  << endl ; 
    cout <<"capacity of vector  " << v.capacity()  << endl << endl ; 

    cout << "size of vector2 " << v1.size()  << endl ; 
    cout <<"capacity of vector2  " << v1.capacity() ; 
    
    // update value 
    v[1] = 90 ; 
     
}