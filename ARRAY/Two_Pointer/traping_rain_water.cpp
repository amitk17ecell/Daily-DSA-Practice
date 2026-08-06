#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size() ; 
       int leftmax =0 , rightmax = 0 , maxheight = height[0] , index = 0 ; 
       int water =0 ; 
       for(int i=0 ; i<n ; i++)
       {
         if(maxheight<height[i])
           { maxheight = height[i] ; 
            index = i ; }
       }
       // collecting left side rain water 
       for(int i=0 ; i<index ; i++)
       {
         if(leftmax>height[i])
            water += (leftmax-height[i]) ; 
         else 
            leftmax = height[i] ; 
       }
       // collecting right side water 
       for(int i = n-1 ; i>index ; i--)
       {
        if(rightmax > height[i])
           water += (rightmax-height[i]) ; 
        else 
            rightmax = height[i] ; 
       }

       return water ; 
    }
};
int main ()
{
    vector<int> arr = {4,2,0,5,6,2,3} ; 
    Solution obj ; 
    int result = obj.trap(arr) ; 
    cout << result << endl ; 
    return 0 ; 
}