#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(2*N);
        for (int i = 0; i < 2*N; i++) {
            cin >> A[i];
        }
        long long result = 0;
        for (int i = 0; i < N; i++) {
            result += max(A[i], A[2*N - 1 - i]);
        }
        cout << result << "\n";
    }
    return 0;
}
