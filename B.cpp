#include<iostream>
using namespace std;

int n;
long long mi, ma;
long long a[51];

long long min(long long n1, long long n2) {
    return (n1 < n2) ? n1 : n2;
}

long long max(long long n1, long long n2) {
    return (n1 > n2) ? n1 : n2;
}

bool judge(long long k)
{
    mi = a[0] - k;
    for (int i = 1 ; i < n ; i++) {
        mi = max(a[i] - k, mi + 1);
        ma = a[i] + k;
        if (ma < mi) return false;
    }
    return true;
}

int main(){
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    long long head = 0, tail = 1e9+1, mid;
    while(head < tail) {
        mid = head + (tail - head) / 2;
        if (judge(mid)) tail = mid;
        else head = mid + 1;
    }
    cout << head;
    return 0;
}