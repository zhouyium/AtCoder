//https://atcoder.jp/contests/abc179/tasks/abc179_d
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

const int MAXN=2e5+4;
long long ans[MAXN];//递推答案
long long sum[MAXN];//前缀和

const int MAXK=10+4;
pair<int, int> seg[MAXK];//区间

const int MO=998244353;

int main() {
    int n,k;
    cin>>n>>k;
    for (int i=1; i<=k; i++) {
        cin>>seg[i].first>>seg[i].second;
    }

    //初始化
    ans[1]=1;
    sum[1]=1;

    for (int i=2; i<=n; i++) {
        for (int j=1; j<=k; j++) {
            int l=seg[j].first;
            int r=seg[j].second;

            ans[i]=(ans[i]+sum[max(0, i-l)]-sum[max(0, i-r-1)]+MO)%MO;
        }
        sum[i]=(sum[i-1]+ans[i])%MO;
    }

    cout<<ans[n]<<"\n";

    return 0;
}