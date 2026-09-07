#include<iostream>
using namespace std ;
class Solution {
public:
    string defangIPaddr(string address) {
       int i =0 ; 
       string ans ; 
       while(i<address.size())
       {
           if(address[i]=='.')
             ans = ans + "[.]" ; 
           else 
             ans = ans + address[i] ; 
         i++;
       }
       return ans ; 
    }
};
int main ()
{
     string s = "1.1.1.1" ; 
     Solution obj ; 
     string result = obj.defangIPaddr(s) ; 
     cout << result ; 
}