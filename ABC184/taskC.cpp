//https://atcoder.jp/contests/abc184/tasks/abc184_c
//C - Super Ryuma
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;

    int ans;
    if (r1==r2 && c1==c2) {
        ans=0;
    } else if (r1+c1==r2+c2) {
        ans=1;
    } else if (r1-c1==r2-c2) {
        ans=1;
    } else if (abs(r1-r2)+abs(c1-c2)<=3) {
        ans=1;
    } else if ((r1+c1)%2==(r2+c2)%2) {
        ans=2;
    } else {
        ans=3;

        bool flag=true;
        for (int i=-3; i<=3 && true==flag; i++) {
            for (int j=-3; j<=3; j++) {
                //判断不能操作3
                if (abs(i)+abs(j)<=3) {
                    //计算新位置
                    int xx=r2+i;
                    int yy=c2+j;
                    if (r1+c1==xx+yy) {
                        ans=2;
                        flag=false;
                        break;
                    }
                    if (r1-c1==xx-yy) {
                        ans=2;
                        flag=false;
                        break;
                    }
                    if (abs(r1-xx)+abs(c1-yy)<=3) {
                        ans=2;
                        flag=false;
                        break;
                    }
                }
            }
        }
    }

    cout<<ans<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif

    return 0;
}