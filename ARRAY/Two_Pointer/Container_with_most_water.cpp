#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size() ; 
        int left =0 , right = n-1 ;
        int maxArea =0 ; 
        while(left<right) 
        {
            int width = right - left ; 
            int H= min(height[right], height[left]) ; 
            int area = width*H ; 
            maxArea = max(maxArea , area) ; 
            if(height[left]>height[right])
               right-- ; 
            else 
               left++ ; 
        } 
        return maxArea ; 
    }
};
int main() 
{
    vector<int> v = {1,8,2,5,7,8,2,7} ; 
    Solution obj ; 
    int result = obj.maxArea(v) ; 
    cout << result ; 
    return 0 ;
}