#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin >> N;
    string S;
    cin >> S;
    int groups = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '1' && (i == 0 || S[i-1] == '0')) {
            groups++;
        }
    }
    cout << groups ;
    return 0;
}
