#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ; 
class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int> arr = nums ; 
        long long sum = 0 ; 
        vector<long long> gains ; 
        for (int x:nums ){
            sum+=x ; 
            string s= to_string(x) ; 
            sort(s.begin(), s.end(), greater<char>()) ; 
            long long best = stoll(s) ; 
            gains.push_back(best - x) ; 
        }
        sort(gains.begin() , gains.end() , greater<long long>()) ; 
        for(int i=0 ; i< min(k, (int)gains.size()) ; i++){
            if(gains[i]>0)
               sum+=gains[i] ; 
            else 
               break ; 
        }
          return sum ; 
    }
};