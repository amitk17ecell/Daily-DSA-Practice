#include<iostream>
#include<vector>
using namespace std ; 
class Solution  { 
    public:
       void wave(vector<vector<int>> matrix )
       {
          int row = matrix.size() ; 
          int column = matrix[0].size() ; 
          for(int j=0 ; j<column ; j++)
          {
            if(j%2==0)
            {
                for(int i=0 ; i<row ; i++)
                {
                    cout<< matrix[i][j] << " " ; 
                }
            }
            else 
               {
                for(int i=row-1 ; i>=0 ; i--)
                {
                    cout << matrix[i][j] << " " ; 
                }
               }
          }
       }
};

int main()
{
    vector<vector<int>> arr = { {1,2,3} , {4,5,6} , {7,8,9}} ; 
    Solution obj ; 
    obj.wave(arr);
    return 0 ; 
}