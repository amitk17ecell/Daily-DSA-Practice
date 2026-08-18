#include<iostream>
#include<vector>
using namespace std ; 
 int main()
 {
    vector<vector<int> > m = {{1,2,3},{4,5,6},{7,8,9}} ; 
    int r = m.size() ;
    int C = m[0].size() ; 
    int target = 4 ; 
    for(int i=0 ; i< r ; i++)
    {
        if(m[i][0]<=target && m[i][C-1])
        {   int start =0  , end = C-1 ; 
            while(start<=end)
            {   int mid = start + (end-start)/2 ;
                if(target == m[i][mid])
                  {
                    cout << "yes present " << endl ;
                    return 0;
                  }
                else if(target > m[i][mid])
                    start = mid+1 ; 
                else 
                  end = mid-1 ; 
            }
        }
    }
    cout << "not present " << endl ; 
    return 0 ; 
 }