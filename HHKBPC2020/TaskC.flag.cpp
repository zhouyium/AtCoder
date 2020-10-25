//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
//HHKB Programming Contest 2020
//C - Neq Min
/*
使用标记法
*/
#include <iostream>
#include <set>

using namespace std;

const int MAXN=2e5+4;
bool f[MAXN];

int main() {
    //快读
    ios::sync_with_stdio(false);
    //cin.tie(0);

    int n;
    cin>>n;

    int x;
    int ans=0;
    for (int i=0; i<n; i++) {
        cin>>x;

        //设置标志
        f[x]=true;

        //查找
        while (true==f[ans]) {
            ans++;
        }

        cout<<ans<<"\n";
   }

    return 0;
}