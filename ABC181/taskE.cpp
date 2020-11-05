//https://atcoder.jp/contests/abc181/tasks/abc181_e
//E - Transformable Teacher
#include <bits/stdc++.h>

using namespace std;

#define LOCAL

typedef long long LL;
const int MAXN=2e5+4;
LL h[MAXN];
LL qsum[MAXN];
LL hsum[MAXN];

const int MAXM=2e5+4;
LL w[MAXM];

int main() {
#ifndef LOCAL
    //提交OJ使用快读
    ios::sync_with_stdio(false);
    cin.tie(0);
#endif
    int n,m;
    cin>>n>>m;

    //读取小朋友身高
    for (int i=1; i<=n; i++) {
        cin>>h[i];
    }
    //数据处理
    sort(h+1, h+n+1);
    //计算前缀和
    for (int i=2; i<=n; i+=2) {
        qsum[i] = qsum[i-2]+abs(h[i]-h[i-1]);
    }
    //计算后缀差
    for (int i=n-1; i>=1; i-=2) {
        hsum[i] = hsum[i+2]+abs(h[i+1]-h[i]);
    }

    //读取老师身高
    for (int i=1; i<=m; i++) {
        cin>>w[i];
    }

    //将老师的身高 w[i] 插入到 h 中二分查找
    LL ans=LONG_LONG_MAX;
    for (int i=1; i<=m; i++) {
        // pos为插入位置
        int pos = lower_bound(h+1, h+1+n, w[i]) - h;
        if (0==pos%2) {
            pos--;
        }
        ans = min(ans, qsum[pos-1]+hsum[pos+1]+abs(h[pos]-w[i]));
    }

    cout<<ans<<"\n";

    return 0;
}