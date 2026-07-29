#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
char ans = letters[0];
int start = 0, end = letters.size() - 1;

while (start <= end) {
    int mid = start + (end - start) / 2;
    if (letters[mid] > target) {
        ans = letters[mid];
        end = mid - 1;
    } else {
        start = mid + 1;
    }
}
return ans;
    }
};

int main()
{
    vector<char> arr = {'a','b','d','e','f'} ; 
    char targeet = 'z' ;                         // just an example 
    Solution obj ; 
    char result = obj.nextGreatestLetter(arr , targeet) ; 
    cout << result << "  " ; 
}