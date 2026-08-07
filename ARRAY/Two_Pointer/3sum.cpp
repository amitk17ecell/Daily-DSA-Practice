#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        vector<vector<int>> v ; 
        int n= nums.size();
        for(int i=0 ; i<n; i++) {
            if(i>0 && nums[i]==nums[i-1])    // removes first dublicates 
               continue ; 
            int target = -nums[i] ; 
            int start = i+1 ;
            int end = n-1 ; 
          // finding other two no. 
          while(start<end)
          {  int sum = nums[start] + nums[end] ; 
            if(sum == target ) 
            {
                v.push_back({nums[i] , nums[start] , nums[end]}) ; 
            
            while(start<end && nums[start] == nums[start+1]) start++ ; // removes second dublicates 
            while(start<end &&  nums[end] == nums[end-1] ) end-- ;  // removes third dublicate 
            start++ ;
             end-- ; 
            }
            else if(sum<target )  
            {
                start++ ; 
             }
             else 
                end-- ; 
          }  
        }
        return v ; 
    }
};

int main()
{
    vector<int> n = {1,-1,2,0,-1} ; 
    Solution obj ; 
    vector<vector<int>> s = obj.threeSum(n) ; 
    int a = s.size() ; 
    for(int i=0 ; i< a ; i++ )

    {    cout << "{" ; 
         for(int j=0 ; j<a ; j++)
        {
           cout << s[i][j] << " " ;
        } 
        cout << "}"<<endl;
    }
    return 0 ; 
}