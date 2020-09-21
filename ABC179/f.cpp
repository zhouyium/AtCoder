//https://atcoder.jp/contests/abc179/tasks/abc179_e
#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long ULL;

const int MAXN=1e5+4;
int idx[MAXN];//和位置索引
ULL sum[MAXN];//和

int main() {
    ULL  n,x,m;
    cin>>n>>x>>m;

    //打表
    ULL now;//当前Ai的值
    ULL cnt;//位置
    ULL l;//索引起点
    ULL r;//索引终点
    for (cnt=1, now=x; ; now=now*now%m, cnt++) {
        if (!idx[now]) {
            //没有计算过，标注已经计算
            idx[now]=cnt;
        } else {
            //数据存在
            l=idx[now];
            r=cnt-1;
            break;
        }
        //更新数据表
        sum[cnt]=sum[cnt-1]+now;
    }

    ULL len=r-l+1;
    ULL ans=0;
    ans+=sum[min(n, l-1)];
    
    n=max(0ULL, n-l+1);
    if (n) {
        ans+=(sum[r]-sum[l-1])*(n/len)+(sum[n%len+l-1]-sum[l-1]);
    }

    cout<<ans<<"\n";

    return 0;
}