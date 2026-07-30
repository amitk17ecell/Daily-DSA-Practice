#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            bool leftOK  = (mid == 0)     || (nums[mid] > nums[mid - 1]);
            bool rightOK = (mid == nums.size() - 1) || (nums[mid] > nums[mid + 1]);

            if (leftOK && rightOK) {
                return mid; // found a peak
            } else if (mid < nums.size() - 1 && nums[mid] < nums[mid + 1]) {
                start = mid + 1; // move right
            } else {
                end = mid - 1;   // move left
            }
        }
        return -1;
    }
};

int main () 

{
    vector<int> arr = {1,2,1,3,5,1,4} ; 
    Solution obj ; 
    int result = obj.findPeakElement(arr) ; 
    cout << result << " " ; 
    return 0 ; 
}