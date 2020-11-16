//https://atcoder.jp/contests/abc182/tasks/abc182_c
//C - To 3
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin>>n;

    //特判
    if (0==n%3) {
        cout<<"0\n";
        return 0;
    } else if (n<=2) {
        cout<<"-1\n";
        return 0;
    }

    //转换为数字
    int cnt[3]={};//每个数字个数
    int sum=0;//每个位数总和
    int tot=0;//位数
    while (n) {
        int p=n%10;//取个位
        n/=10;
        sum+=p;
        tot++;
        cnt[p%3]++;
    }

    if (1==sum%3) {
        if (tot>1 && cnt[1]>=1) {
            cout<<"1\n";
        } else if (tot>2 && cnt[2]>=2) {
            cout<<"2\n";
        } else {
            cout<<"-1\n";
        }
    } else if (2==sum%3) {
        if (tot>1 && cnt[2]>=1) {
            cout<<"1\n";
        } else if (tot>2 && cnt[1]>=2) {
            cout<<"2\n";
        } else {
            cout<<"-1\n";
        }
    }

    return 0;
}