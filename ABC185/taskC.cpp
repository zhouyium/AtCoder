//https://atcoder.jp/contests/abc185/tasks/abc185_c
//C - Duodecim Ferra
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

typedef long long LL;

const int MAXL=2e2+4;
LL ans[MAXL][MAXL];

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    LL l;
    cin>>l;

    //
    l--;
    for (int i=0; i<=l; i++) {
        ans[i][0]=1;
        ans[i][i]=1;
        ans[i][1]=i;
    }
    for (int i=1; i<=l; i++) {
        for (int j=2; j<i; j++) {
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
        }
    }

    cout<<ans[l][11]<<"\n";

#if 0
    long long ans=1;
    for (long long i=1; i<11; i++) {
        ans *= (l-i);
        ans /=i;
    }
    cout<<ans<<"\n";
#endif

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}