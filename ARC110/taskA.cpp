//https://atcoder.jp/contests/arc110/tasks/arc110_a
//A - Redundant Redundancy
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

typedef long long LL;

const LL MAXX=1e13;

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif

    LL n;
    cin>>n;

    LL x=2;
    for (LL y=x+1; y<=n; y++) {
        LL t=__gcd(x, y);
        x=x*y/t;
    }

    cout<<x+1<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}
