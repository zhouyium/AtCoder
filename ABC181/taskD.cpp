//https://atcoder.jp/contests/abc181/tasks/abc181_d
//D - Hachi
#include <bits/stdc++.h>

using namespace std;

string str;//保存字符串
int num[10];//数字0~9

bool judge(int x) {
    int t=x;
    int tmp[10]={};
    while (t) {
        tmp[t%10]++;
        t/=10;
    }
    for (int i=0; i<10; i++) {
        if (tmp[i]>num[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin>>str;

    int len=str.length();
    for (int i=0; i<len; i++) {
        num[str[i]-'0']++;
    }

    if (1==len) {
        //长度是 1
        if ("8"==str) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
        return 0;
    } else if (2==len) {
        //长度是 2
        int n = stoi(str);
        if (0==n%8) {
            cout<<"Yes\n";
            return 0;
        }
        n = n/10+n%10*10;
        if (0==n%8) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
        return 0;
    }
    //判断
    for (int i=104; i<1000; i+=8) {
        if (judge(i)) {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";

    return 0;
}