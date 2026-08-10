#include<iostream>
#include<vector>
using namespace std ; 
 class Solution {
    public :
       int search(vector<vector<int>>&arr ,int row , int column ,int target)
       {    for(int i=0 ; i<row ; i++ )
            {
                for(int j=0 ; j< column ; j++)
                {
                    if(arr[i][j] == target)
                       return 1 ; 
                }
            }
            return 0 ;        
       }
 } ;

 int main ()
 {
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}} ; 
    Solution object ; 
    int result = object.search(nums ,3,3,6) ; 
    cout<< result << endl ;
    return 0 ;   
 }