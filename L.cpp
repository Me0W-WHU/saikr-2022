#include<iostream>
using namespace std;

int main(){
    long long n, m, l, r, x, temp, ans = 0;
    cin >> n >> m;
    for (int i = 0 ; i < n ; i++) {
        cin >> temp;
        ans += temp;
    }
    long long coef = n * 2 - 1;
    ans *= coef;
    for (int i = 0 ; i < m ; i++) {
        cin >> l >> r >> x;
        ans += (r - l + 1) * x * coef;
        cout << ans << endl;
    }
    return 0;
}