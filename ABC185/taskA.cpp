//https://atcoder.jp/contests/abc185/tasks/abc185_a
//A - ABC Preparation
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<min({a,b,c,d})<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}