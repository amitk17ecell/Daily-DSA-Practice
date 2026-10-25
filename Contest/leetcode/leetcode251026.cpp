#include<iostream>
using namespace std ; 
class Solution {
public:
    int calculateScore(int a, int b) {
        int counta =0 , countb = 0 ; 
        while(a)
        {
            if(a&1==1)
              counta++ ; 
            a=a>>1 ;
        }
        while(b)
        {
            if(b&1==1)
              countb++ ; 
            b=b>>1;
        }
        if(counta>=countb)
           return counta*countb;
        else
          return countb/counta;
    }
};