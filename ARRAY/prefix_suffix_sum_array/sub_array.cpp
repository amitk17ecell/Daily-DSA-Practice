#include<iostream>
#include<vector>
using namespace std ; 

int main()
{
    vector<int> arr = {4,2,5,-3,6,7} ; 
    int n = arr.size() ; 
    for(int start = 0 ; start<n ; start++)
    {
        for(int end=start ; end <n ; end++)
          {
            cout << " [ " ; 
               for(int i=start ; i<=end ; i++)
               {
                 cout << arr[i] << " " ; 
               }
             cout << " ] " ; 
          }
          cout << endl ; 
    }
    return 0 ;
}