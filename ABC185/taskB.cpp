//https://atcoder.jp/contests/abc185/tasks/abc185_b
//B - Smartphone Addiction
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
//#define __LOCAL

const int MAXM=1e3+4;
int a[MAXM], b[MAXM];

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    int n,m,t;
    cin>>n>>m>>t;
    for (int i=1; i<=m; i++) {
        cin>>a[i]>>b[i];
    }

    //模拟
    int n1=n;
    for (int i=1; i<=m; i++) {
        //放电
        n=n-(a[i]-b[i-1]);

        //判断
        if (n<=0) {
            cout<<"No\n";
            return 0;
        }

        //充电
        n=n+(b[i]-a[i]);
        if (n>n1) {
            n=n1;
        }
    }

    //放电
    n=n-(t-b[m]);
    //判断
    if (n<=0) {
        cout<<"No\n";
    } else {
        cout<<"Yes\n";
    }

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}