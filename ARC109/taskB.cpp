//https://atcoder.jp/contests/arc109/tasks/arc109_b
//B - log
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

typedef long long LL;

LL n;

bool check(LL x) {
#if 0
    __int128_t sum1=((__int128_t)n)*(n+1);
    __int128_t sum2=(((__int128_t)n)+2-x)*(n+1+x);
#else
    LL sum1=x*(x+1)/2;
    LL sum2=n+1;
#endif
    return sum2>=sum1;
}

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    cin>>n;

    LL left=0;
    LL right=n+1;
    LL mid;
    while (left<right) {
        mid = (left+right+1)/2;
        if (check(mid)) {
            left=mid;
        } else {
            right=mid-1;
        }
    }

    cout<<n+2-left<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}