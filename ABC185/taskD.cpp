//https://atcoder.jp/contests/abc185/tasks/abc185_d
//D - Stamp
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
//#define __LOCAL

const int MAXN=1e9+4;
const int MAXM=2e5+4;
int a[MAXM];
int gap[MAXM];

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    int n, m;
    cin>>n>>m;
    for (int i=1; i<=m; i++) {
        cin>>a[i];
    }
    a[m+1]=n+1;
    sort(a+1, a+m+1);

    //差分
    int k=MAXN;
    int ans=0;
    for (int i=1; i<=m+1; i++) {
        gap[i]=a[i]-a[i-1]-1;
        if (gap[i]<k && gap[i]>0) {
            k=gap[i];
        }
    }
    if (MAXN!=k) {
        for (int i=1; i<=m+1; i++) {
            ans += ceil(1.0*gap[i]/k);
        }
    }
    cout<<ans<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}