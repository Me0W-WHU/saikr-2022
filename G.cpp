#include<iostream>
using namespace std;
int cnt = 0;
int line[10];
int n;

void dfs(int k)
{
    int i = (k == 0) ? 1 : 0;
    while (i < 10 && cnt < 50) {
        //append line[k]
        line[k] = i;
        //check if the number is in range
        int sum = 0, pow = 1;
        for (int j = k ; j >= 0 ; j--) {
            sum += line[j] * pow;
            pow *= 10;
        }
        if (sum > n) return;
        //print current
        for (int p = 0 ; p <= k ; p++) cout << line[p];
        cout << ".mp4" << endl;
        cnt++;
        //go deeper
        dfs(k + 1);
        i++;
    }
}

int main(){
    cin >> n;
    dfs(0);
    return 0;
}