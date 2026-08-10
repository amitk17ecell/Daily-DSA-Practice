#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> addition(const vector<vector<int>>& arr,
                                 const vector<vector<int>>& nums) {
        int row = arr.size();
        int column = arr[0].size();
        
        vector<vector<int>> sum(row, vector<int>(column)); // allocate properly

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                sum[i][j] = arr[i][j] + nums[i][j];
            }
        }
        return sum;
    }
};

int main() {
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> b = {{1,5,3},{4,5,62},{71,78,90}};
    
    Solution oj;
    vector<vector<int>> result = oj.addition(a, b);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
