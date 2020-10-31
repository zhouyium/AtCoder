//https://atcoder.jp/contests/arc107/tasks/arc107_b
//B - Quadruple 

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL n,k;

LL solve(LL sum) {
    LL tot = sum-1;
    LL sub = max(0LL, sum-n-1);
    return max(0LL, tot-2*sub);
}

int main() {
    cin>>n>>k;

    LL ans=0;
    for (LL i=k; i<=2*n; i++) {
        ans += (solve(i)*solve(i-k));
    }
    cout<<ans<<"\n";

    return 0;
}