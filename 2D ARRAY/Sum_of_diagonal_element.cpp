#include<iostream>
#include<vector>
using namespace std ; 
class Solution{
    public:
       int sum(vector<vector<int>> arr) 
       {
        int row = arr.size() ; 
        int column = arr[0].size() ;
        int sum1 =0 , sum2 = 0 ; 
        for(int i=0 ; i< row ; i++)     // only if row == column 
        {
           sum1 += arr[i][i] ;  
        }
        int j = column-1 ; 
        int i =0 ;
        while(j>0) {
            sum2 += arr[i][j] ; 
            j-- ; 
            i++ ; 
        }
        return sum1+sum2 ; 
       }
};
int main()
{
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}} ; 
    Solution obj ; 
    int result = obj.sum(nums) ; 
    cout << "sum of all diagonal elements are : " << result  << endl ; 
    return 0 ; 
} 