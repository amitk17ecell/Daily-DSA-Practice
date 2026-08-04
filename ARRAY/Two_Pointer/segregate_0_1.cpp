#include<iostream>
#include<vector>
using namespace std ; 

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int start =0 , end = arr.size()-1 ; 
        while(start<end)
        {
            if(arr[start]==0)
            {
                start++ ; 
            }
            else 
            {
                if(arr[end]==0)
                {
                    swap(arr[start],arr[end]) ; 
                    start++ ;
                    end-- ; 
                }
                else
                   end--;
            }
        }
    }
};

int main() 
{
    vector<int>nums = {1,0,1,0,1,0,1,1,1};
    Solution obj ; 
    obj.segregate0and1(nums) ;  
}