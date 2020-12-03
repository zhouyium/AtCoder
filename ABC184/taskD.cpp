//https://atcoder.jp/contests/abc184/tasks/abc184_d
//D - increment of coins
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

const int MAXN=1e2+2;
double dp[MAXN][MAXN][MAXN];

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    int a,b,c;
    cin>>a>>b>>c;

    for (int i=99; i>=a; i--) {
        for (int j=99; j>=b; j--) {
            for (int k=99; k>=c; k--) {
                double t=i+j+k;
                dp[i][j][k] = i/t*(dp[i+1][j][k]+1) + j/t*(dp[i][j+1][k]+1) + k/t*(dp[i][j][k+1]+1);
            }        
        }
    }

    cout<<fixed<<setprecision(9)<<dp[a][b][c]<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}