//https://atcoder.jp/contests/abc183/tasks/abc183_d
//D - Water Heater
#include <bits/stdc++.h>

using namespace std;

const int MAXN=2e5+4;
long long nums[MAXN];

int main() {
#if 0
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif

    int n,w;
    cin>>n>>w;
    for (int i=1; i<=n; i++) {
        int s,t,p;
        cin>>s>>t>>p;

        nums[s] += p;
        nums[t] -= p;
    }

    for (int i=1; i<MAXN; i++) {
        nums[i] += nums[i-1];
    }

    for (int i=0; i<MAXN; i++) {
        if (nums[i]>w) {
            cout<<"No\n";
            return 0;
        }
    }

    cout<<"Yes\n";
    return 0;
}