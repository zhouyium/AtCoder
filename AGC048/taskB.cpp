//https://atcoder.jp/contests/agc048/tasks/agc048_b
//B - Bracket Score
#include <bits/stdc++.h>

using namespace std;

const int MAXN=2e5+4;
long long a[MAXN];
long long b[MAXN];

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    for (int i=1; i<=n; i++) {
        cin>>b[i];
        if (0==i%2) {
            swap(a[i], b[i]);
        }
    }

    long long ans=0;
    for (int i=1; i<=n; i++) {
        ans+=a[i];
        b[i]-=a[i];
    }
    sort(b+1, b+n+1, greater<int>());//降序
    for (int i=1; i<=n/2; i++) {
        ans+=b[i];
    }

    cout<<ans<<"\n";

    return 0;
}
