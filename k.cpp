#include <iostream>
using namespace std;

int main() {
    int n = 0, tmp = 0;
    int max = 0x8f3f3f3f;
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> tmp;
        if (tmp > max) max = tmp;
    }
    cout << max;
}