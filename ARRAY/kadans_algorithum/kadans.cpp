#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi = INT16_MIN; 
        int n = arr.size() ; 
        int prefix =0 ; 
        for(int i=0 ; i<n ; i++)
        {
            prefix += arr[i] ; 
            maxi = max(prefix , maxi) ; 
            if(prefix<0 ) 
            {
                prefix = 0 ; 
            }
        }
        return maxi ; 
    }
};
int main () 
{   vector<int> v = {4,5,-2,6,8,-10,15} ; 
    Solution obj ; 
    int result = obj.maxSubarraySum(v) ; 
    cout << result ; 
    return 0 ; 

}