#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size() - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int missing = arr[mid] - (mid + 1); // how many missing before arr[mid]
            
            if (missing < k) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return start + k;
    }
};

int main () 
{
    vector<int> arr = {2,3,4,7,11} ; 
    int k = 5 ; 
    Solution ans ; 
    int result = ans.findKthPositive(arr , k ) ; 
    cout << result ; 
    return 0 ; 
}