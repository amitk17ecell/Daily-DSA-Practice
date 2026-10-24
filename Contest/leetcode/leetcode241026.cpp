#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        vector<int> vor = nums ; 
        long long ans =0 ; 
        long long len = 0 ; 
        for(int x:nums){
            if(x>= minK && x<= maxK){
                len++ ; 
            }
            else{
                ans+=len*(len+1)/2 ; 
                len = 0 ; 
            }
        }
        ans+= len*(len+1)/2 ; 
        return ans ;
    }
};