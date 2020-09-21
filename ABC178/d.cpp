//////https://atcoder.jp/contests/abc178/tasks/abc178_d
#include <bits/stdc++.h>

using namespace std;

const int MO=1e9+7;
const int MAXN=2e3+2;
long long ans[MAXN];

int main() {
    int s;
    cin>>s;

    //初始化ans
    ans[0]=1;

    for (int i=3; i<=s; i++) {
        for (int j=3; j<=i; j++) {
            ans[i]=(ans[i]+ans[i-j])%MO;
        }
    }

    cout<<ans[s]<<"\n";

    return 0;
}