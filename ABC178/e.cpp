//////https://atcoder.jp/contests/abc178/tasks/abc178_e
#include <bits/stdc++.h>

using namespace std;

const int MAXN=2e5+4;
long long a[MAXN];
long long b[MAXN];

int main() {
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        long long x, y;
        cin>>x>>y;
        a[i]=x+y;
        b[i]=x-y;
    }
    sort(a+1, a+n+1);
    sort(b+1, b+n+1);

    cout<<max(a[n]-a[1], b[n]-b[1])<<"\n";

    return 0;
}