//https://atcoder.jp/contests/abc179/tasks/abc179_b
#include <iostream>
using namespace std;

const int MAXN=1e2+4;
int arr[MAXN][3];
int main() {
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>arr[i][1]>>arr[i][2];
    }

    for (int i=1; i<=n-2; i++) {
        if (arr[i][1]==arr[i][2] && arr[i+1][1]==arr[i+1][2] && arr[i+2][1]==arr[i+2][2]) {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";

    return 0;
}