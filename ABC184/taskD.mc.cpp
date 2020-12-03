//https://atcoder.jp/contests/abc184/tasks/abc184_d
//D - increment of coins
//Using Monte Carlo method
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

//计算概率
double prob(int n, int a, int b, int c) {
    int u=100-a;
    if (u>n) {
        return 0.0;
    }
    if (n-u>(99-b)+(99-c)) {
        return 0.0;
    }

    double p=1.0, ret=0.0;
    for (int i=0; i<u; i++) {
        p *= 1.0*(a+i)/(a+b+c+i);
    }
    for (int v=0; v<=n-u; v++) {
        if (v+b>99 || n-u-v+c>99) {
            continue;
        }
        double exp=1.0;
        for (int j=0; j<v; j++) {
            exp *= 1.0*(b+j)/(a+b+c+u+j);
        }
        for (int j=0; j<n-u-v; j++) {
            exp *= 1.0*(c+j)/(a+b+c+u+v+j);
        }
        for (int j=v; j>=1; j--) {
            exp *= 1.0*(u-1+j)/j;
        }
        for (int j=n-u-v; j>=1; j--) {
            exp *= 1.0*(u-1+v+j)/j;
        }
        ret += (p*exp);
    }
    return ret;
}

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    int a,b,c;
    cin>>a>>b>>c;

    double ans=0;
    for (int n=1; n<=300; n++) {
        double pa=prob(n, a, b, c);
        double pb=prob(n, b, c, a);
        double pc=prob(n, c, a, b);
        ans += n*(pa+pb+pc);
    }

    cout<<fixed<<setprecision(9)<<ans<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}