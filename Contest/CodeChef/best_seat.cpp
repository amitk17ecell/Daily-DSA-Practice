#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    double avg = (A[0] + A[N - 1]) / 2.0;  // use double for precision
    long long Ans = A[0];                  // initialize with first seat
    double miDiff = abs(A[0] - avg);

    for (int i = 1; i < N; i++) {
        double diff = abs(A[i] - avg);
        if (diff < miDiff || (diff == miDiff && A[i] < Ans)) {
            miDiff = diff;
            Ans = A[i];
        }
    }

    cout << Ans <<  endl ;
    return 0;
}
