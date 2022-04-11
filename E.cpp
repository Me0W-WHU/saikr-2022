#include <iostream>
#include <algorithm>
using namespace std;

long long k;
int n;

long long min(long long a, long long b) {
    return (a < b) ? a : b;
}

int main() {
    cin >> k >> n;
    for (int i = 0 ; i < n ; i++) {
        k += min(k / 10, 5);
        k += 5;
    }
    cout << k;
}
