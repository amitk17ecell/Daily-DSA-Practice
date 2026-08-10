#include<iostream>
#include<vector>
using namespace std ; 

class Solution {
   public :
       int row(vector<vector<int>>arr)
       {
          int row = arr.size();
          int column = arr[0].size() ; 
          int sum = INT16_MIN , index = -1 ; 
          for(int i=0 ; i<row ; i++) 
          {  int total = 0 ; 
            for(int j=0 ; j<column ; j++)
            {
                total+=arr[i][j] ; 
                if(sum<total)
                {
                    sum = total ; 
                    index = i ; 
                }
            }
          }
          return index ; 
       }
};

int main()
{
    vector<vector<int>> nums = {{1,2,3},{9,7,8},{4,5,6},{10,11,12}} ; 
    Solution obj ; 
    int result = obj.row(nums) ; 
    cout << "respected row is :" << result << endl ; 
    return 0 ;
}