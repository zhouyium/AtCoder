//https://atcoder.jp/contests/abc183/tasks/abc183_c
//C - Travel
#include <bits/stdc++.h>

using namespace std;

const int MAXN=10;
int nums[MAXN][MAXN];

int main() {
    int n,k;
    cin>>n>>k;

    int i;
    for (i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>nums[i][j];
        }
    }

    vector<int> idx(n+2);
    iota(idx.begin(), idx.end(), 0);
    idx[n+1]=1;
    int ans=0;
    do {
        int sum=0;
        for (i=2; i<=n+1; i++) {
            sum+=nums[idx[i-1]][idx[i]];
        }
        if (sum==k) {
            ans++;
        }
    } while (next_permutation(idx.begin()+2, idx.end()-1));

    cout<<ans<<"\n";

    return 0;
}