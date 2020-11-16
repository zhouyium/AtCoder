//https://atcoder.jp/contests/abc182/tasks/abc182_b
//B - Almost GCD
#include <bits/stdc++.h>

using namespace std;

const int MAXN=1e2+4;
int nums[MAXN];

int main() {
    int n, maxx=0;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>nums[i];
        maxx=max(nums[i], maxx);
    }

    int zd_gcd=0;
    int ans;
    for (int i=2; i<=maxx; i++) {
        int tot=0;
        for (int j=1; j<=n; j++) {
            if (0==nums[j]%i) {
                tot++;
            }
        }
        if (tot>zd_gcd) {
            zd_gcd=tot;
            ans=i;
        }
    }

    cout<<ans<<"\n";

    return 0;
}