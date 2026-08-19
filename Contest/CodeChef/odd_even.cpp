#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] % 2 == 0) evenCount++;
            else oddCount++;
        }
        int result = 2 * min(oddCount, evenCount);
        if (oddCount != evenCount) result++;
        cout << result << "\n";
    }
    return 0;
}
