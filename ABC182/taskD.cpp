//https://atcoder.jp/contests/abc182/tasks/abc182_d
//D - Wandering
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const int MAXN=1e6+4;
LL nums[MAXN];//采用前缀和预处理
LL maxx[MAXN];

int main() {
#if 1
    //提交OJ使用快读
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    LL n;
    cin>>n;
    for (LL i=1; i<=n; i++) {
        cin>>nums[i];
        //计算前缀和
        nums[i] += nums[i-1];
        maxx[i] = max(maxx[i-1], nums[i]);
    }

    LL ans=0;//当前robot位置
    LL now=0;
    for (LL i=1; i<=n; i++) {
        ans=max(ans, now+maxx[i]);
        now += nums[i];
    }

    cout<<ans<<"\n";

    return 0;
}