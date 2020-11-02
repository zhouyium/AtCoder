//https://atcoder.jp/contests/agc048/tasks/agc048_a
//A - atcoder < S
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    string str;
    while (t-->0) {
        cin>>str;

        //特例判断
        if (str>"atcoder") {
            cout<<"0\n";
            continue;
        } else {
            string tmp(str.length(), 'a');
            if (str==tmp) {
                cout<<"-1\n";
                continue;
            }
        }

        for (int i=0; i<str.length(); i++) {
            if ('a'==str[i]) {
                continue;
            }
            if (str[i]<='t') {
                cout<<i<<"\n";
                break;
            } else {
                cout<<i-1<<"\n";
                break;
            }
        }
    }
    return 0;
}