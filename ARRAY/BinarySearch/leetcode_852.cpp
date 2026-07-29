#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start =0 , end = arr.size()-1 , mid ; 
        while(start<=end)
        {
            mid = start + (end-start)/2 ; 
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
               return mid ; 
            else if ( arr[mid] < arr[mid+1])
               start = mid+1 ; 
            else 
              end = mid-1 ; 
        }
        return -1 ; 
    }
};

int main()
{
    vector<int> arr = {1,2,3,4,5,3,2} ;
    Solution obj ; 
    int result = obj.peakIndexInMountainArray(arr) ;
    cout << result << endl ; 
}