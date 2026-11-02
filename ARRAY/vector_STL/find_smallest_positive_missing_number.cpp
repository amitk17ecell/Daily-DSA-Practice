#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std ; 
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int , int > fre ; 
        for(int x : nums ) {
            fre[x]++ ; 
        }
        for(int i=1 ; ;i++){
             if(fre[i] == 0)
             {
                return i ; 
                break ; 
             }
        }
        return 0 ; 

    }
};