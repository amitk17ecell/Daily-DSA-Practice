#include <iostream>
using namespace std ;
class Missing {
    public : 
    int is_missing(int arr[] , int n)
    {   long long sum = 0, add=0;
        for(int i=0 ;  i<n; i++)
        {
           add+=arr[i];
        }
        sum = (1LL*(n+2)*(n+1))/2;
        return (int)(sum-add);
    }     
};
int main ()
{
  int a[] = {1,2,3,5,6,7,8};
  int x = sizeof(a)/sizeof(a[0]);

  Missing m ; 
  int ans = m.is_missing(a , x) ;
  cout << "missing elemet is : " << ans ;
}