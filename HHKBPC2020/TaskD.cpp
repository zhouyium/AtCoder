//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
//HHKB Programming Contest 2020
//D - Squares
//https://blog.csdn.net/justidle/article/details/109024249
/*数学题*/
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const int MO = 1e9+7;

int main() {
    int t;
    cin>>t;

    while (t--) {
        LL n, a, b;
        cin>>n>>a>>b;

        LL ans = 0;
        LL d=n-a-b;
        if (d>=0) {
            LL x=(d+1)*(d+2)%MO;
            LL y=n-a+1;
            LL z=n-b+1;
            ans=2*x*(y*z%MO)%MO-x*x%MO;
            ans=(ans+MO)%MO;
        }

        cout<<ans<<"\n";
    }

    return 0;
}