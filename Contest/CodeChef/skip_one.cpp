#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int coins = K;
        bool couponUsed = false;
        int count = 0;

        for (int i = 0; i < N; i++) {
            if (arr[i] <= coins) {
                coins -= arr[i];
                count++;
            } else if (!couponUsed) {
                // use coupon here
                couponUsed = true;
                count++;
            } else {
                // cannot buy further
                break;
            }
        }

        cout << count << "\n";
    }
    return 0;
}
