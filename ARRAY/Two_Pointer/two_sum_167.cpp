#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans ;
        int start = 0 , end = numbers.size()-1 ; 
        while(start<end)
        {
            if(numbers[start]+numbers[end]==target)
            {
                ans.push_back(start+1) ; 
                ans.push_back(end+1) ; 
                return ans ; 
            }
            else if(numbers[start]+numbers[end]<target)
            {
                start++ ; 
            }
            else
              end-- ; 
        }
 return ans ; 
    }
};

int main()
{
    vector<int> a = {1,2,4,7,15,27} ; 
    int target = 22 ; 
    Solution obj ; 
    vector<int> result = obj.twoSum(a , target) ; 
    for(int i=0 ; i<result.size() ; i++) 
    {
        cout << result[i] ; 
    } 
    return 0 ; 
}