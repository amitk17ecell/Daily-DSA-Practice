#include<iostream>
using namespace std ; 
int main () {
   // char ch[] = {'a','p', 'p','l','e'} ; 
   // cout << ch ; 
    // anoter way of printing 
   // for(int i=0 ; i<5 ; i++) 
   // {
   //     cout << ch[i] ; 
   // }
   // cout << endl ;
   
//    char ch[10] ;
//    cin >> ch ; 
//    ch[3] = '\0' ; 
//    cout << ch ;

    //                        concatenation 
    // string s1 = "rohit" ; 
    // string s2 = " mohit" ; 
    // string s3 = s1 + s2 ; 
    // cout << s3 << endl  ;

    //  removing and addition of an element 


     string s1 = "mohit" ; 
     s1.push_back('a') ;
     s1.push_back('p') ; 
     cout << s1  << endl ; 
     s1.pop_back() ; 
     cout << s1 ; 

     string sc ; 
     getline(cin , sc) ;
     cout << sc << endl << sc.size() ;  

}