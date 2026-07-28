#include<iostream>
#include<vector> 
using namespace std ; 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1 , last = -1  ; 
        int start = 0  , end = nums.size()-1  , mid  ; 
        // for finding first occurance 
        while (start<=end)
        {
            mid = start + (end-start)/2 ; 
            if(nums[mid] == target)
             {   first = mid ;
                end = mid-1 ; 
             }
            else if (nums[mid] < target)
                start = mid+1 ; 
            else 
                end = mid-1 ;  
        }
        // for finding last occurance 
        start = 0 ;
        end = nums.size()-1 ; 
        while (start<=end)
        {
            mid = start + (end-start)/2 ; 
            if(nums[mid] == target)
             {   last = mid ;
                start = mid+1 ; 
             }
            else if (nums[mid] < target)
                start = mid+1 ; 
            else 
                end = mid-1 ;  
        }

              vector<int> arr = {first, last};
      
      return arr ; 

    }
};

int main()
{
    Solution obj ; 
    vector<int> nums = {2,5,7,7,7,8,8,8,8,8,8,8,10} ;
    int target = 8 ;
    vector<int> result = obj.searchRange(nums ,target) ; 

cout << "first occurance  " << result[0] ; 
cout << "    last occurance   "   << result[1] ; 
return 0 ; 

}