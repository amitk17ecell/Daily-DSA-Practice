#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> reverse(vector<vector<int>> arr) {
        int row = arr.size();
        int column = arr[0].size();
        for (int i = 0; i < row; i++) {
            int start = 0, end = column - 1;
            while (start < end) {
                swap(arr[i][start], arr[i][end]);
                start++;   // move forward
                end--;     // move backward
            }
        }
        return arr;
    }
};

int main() {
    vector<vector<int>> nums = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    Solution obj;

    vector<vector<int>> result = obj.reverse(nums);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
