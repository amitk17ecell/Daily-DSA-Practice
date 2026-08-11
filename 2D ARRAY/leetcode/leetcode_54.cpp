#include<iostream>
#include<vector> 
using namespace std ;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans; 
        int row = matrix.size(), column = matrix[0].size(); 
        int top = 0, bottom = row - 1;
        int left = 0, right = column - 1;

        while (left <= right && top <= bottom) {
            // print top row
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            // print right column
            for (int j = top; j <= bottom; j++)
                ans.push_back(matrix[j][right]);
            right--;

            // print bottom row
            if (top <= bottom) {
                for (int k = right; k >= left; k--)
                    ans.push_back(matrix[bottom][k]);
                bottom--;
            }

            // print left column
            if (left <= right) {
                for (int l = bottom; l >= top; l--)
                    ans.push_back(matrix[l][left]);
                left++;
            }
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>>a ={{1,2,3},{4,5,6},{7,8,9}} ; 
    Solution obj ; 
   vector<int> mattrix =  obj.spiralOrder(a) ; 
     for(int i=0 ; i<mattrix.size() ;i++)
       cout << mattrix[i]  << " "; 
   return  0 ;  
}