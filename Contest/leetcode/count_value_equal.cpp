#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std ; 
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
       unordered_map<int , vector<int>> positions ; 
        for(int i=0 ; i<nums.size() ; i++){
            positions[nums[i]].push_back(i) ; 
        }
        int specialC = 0 ; 
        for(auto &p :positions) {
            auto &indx = p.second ; 
            if(indx[1]-indx[0] == indx[2]-indx[1]) {
                specialC ++ ; 
            }
        }
        return specialC ;
    }
    
};