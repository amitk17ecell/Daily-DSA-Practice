#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Find remainder when divided by 10
    int remainder = N % 10;

    // If N is already a multiple of 10, next cleaning is after 10 days
    int daysLeft = (remainder == 0) ? 10 : (10 - remainder);

    cout << daysLeft << endl;
    return 0;
}
