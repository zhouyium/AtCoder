//https://atcoder.jp/contests/arc108/tasks/arc108_a
//A - Sum and Product
//从 1 到 sqrt(P) 中枚举是否存在 N 和 M。
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
//#define __LOCAL

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    long long s,p;
    cin>>s>>p;

    long long t=sqrt(p);
    for (long long i=1; i<=t; i++) {
        long long n=i;
        long long m=s-i;
        if (n*m==p) {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}