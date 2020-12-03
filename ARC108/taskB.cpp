//https://atcoder.jp/contests/arc108/tasks/arc108_b
//B - Abbreviate Fox
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
//#define __LOCAL

int main() {
#ifndef __LOCAL
    //快读代码
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    
    int n;
    string s;
    cin>>n>>s;

    string t(n, ' ');

    int idx=0;
    int cnt=0;//统计删除几个
    for (int i=0; i<n; i++) {
        t[idx++]=s[i];
        if ('x'==s[i]) {
            //字符 x
            if (idx>=3 && 'o'==t[idx-2] && 'f'==t[idx-3]) {
                idx -= 3;
                cnt += 3;//删除了 3 个字符
            }
        }
    }

    cout<<n-cnt<<"\n";

#ifdef __LOCAL
    //本地调试使用
    system("pause");
#endif

    return 0;
}