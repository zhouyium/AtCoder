//https://atcoder.jp/contests/abc183/tasks/abc183_e
//E - Queen on Grid
#include <bits/stdc++.h>

using namespace std;
const int MAXH=2e3+2;
const int MAXW=2e3+2;
char nums[MAXH][MAXW];//用于保存迷宫

long long row[MAXH];//行走法
long long col[MAXW];//列走法
long long dia[MAXH+MAXW];//对角线

const long long MO=1e9+7;
/*计算对角线的时候 i-j 可能出现负数，最大的负数是 1-2000=-1999，所以需要一个 OFFSET 保证正下标*/
const int OFFSET=max(MAXH, MAXW);//只要超过MAXH和MAXW最大值就可以

int main() {
#if 1
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    int h,w;
    cin>>h>>w;
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            cin>>nums[i][j];
        }
    }

    long long ans=-1;
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            if ('#'==nums[i][j]) {
                row[i] = 0;
                col[j] = 0;
                dia[i-j+OFFSET] = 0;
            } else {
                long long res = (row[i]+col[j]+dia[i-j+OFFSET])%MO;
                if (1==i && 1==j) {
                    res++;
                }
                ans = res;

                //更新
                row[i] = (row[i]+res)%MO;
                col[j] = (col[j]+res)%MO;
                dia[i-j+OFFSET] = (dia[i-j+OFFSET]+res)%MO;
            }
        }
    }

    cout<<ans<<"\n";

    return 0;
}