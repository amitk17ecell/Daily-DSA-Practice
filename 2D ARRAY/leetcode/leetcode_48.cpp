#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size()  ;
        // transpose 
         for(int i=0 ; i<n-1;i++)
         {
         for(int j=i+1 ; j<n ; j++)
          swap(matrix[i][j] , matrix[j][i]) ;
         }

         // reverse the row 
        for(int i=0 ; i<n ; i++)
        {
            int start =0 , end = n-1 ; 
            while(start<end)
            {
                swap(matrix[i][start] , matrix[i][end]) ; 
                start++ ; 
                end-- ; 
            }
        }
          
    }
};
int main()
{  vector<vector<int>> mat ={{1,2,3},{4,5,6},{7,8,9}} ; 
   Solution obj ; 
   obj.rotate(mat) ; 
   return 0 ; 
}