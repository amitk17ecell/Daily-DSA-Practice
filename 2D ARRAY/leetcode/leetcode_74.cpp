#include<iostream>
#include<vector>
using namespace std ; 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size() , c = matrix[0].size() , start = 0 , end = r*c-1 ; 
        int mid , row , col ; 
        while(start <= end)
        {
            mid = start + (end-start)/2 ; 
            row = mid/c ; 
            col = mid%c ;
            if(matrix[row][col] == target)
               return true ; 
            else if (matrix[row][col] < target)
               start = mid+1 ; 
            else 
              end = mid-1 ; 
            
        }
        return false ; 
    }
};

int main ()
{
    vector<vector<int> > m = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 4 ; 
    Solution obj ; 
    bool result = obj.searchMatrix(m,target) ; 
    cout << result << " " ; 
    return 0 ; 
}