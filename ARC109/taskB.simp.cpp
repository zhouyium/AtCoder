//https://atcoder.jp/contests/arc109/tasks/arc109_b
//B - log
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
//#define __LOCAL

typedef long long LL;

LL n;

bool check(LL x) {
    LL sum1=x*(x+1)/2;
    LL sum2=n+1;
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
    LL right=2e9;
    LL mid;
    while (left<right) {
        mid = (left+right+1)/2;
        if (check(mid)) {
            left=mid;
        } else {
            right=mid-1;
        }
    }

    cout<<n+1-left<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}