//https://atcoder.jp/contests/abc184/tasks/abc184_b
//B - Quizzes
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
    int n,x;
    string s;
    cin>>n>>x>>s;

    for (int i=0; i<n; i++) {
        if ('o'==s[i]) {
            x++;
        } else if ('x'==s[i] && x>0) {
            x--;
        }
    }

    cout<<x<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}