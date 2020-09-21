//https://atcoder.jp/contests/abc179/tasks/abc179_a
#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    int len = s.length();
    if ('s'==s[len-1]) {
        s += "es";
    } else {
        s += "s";
    }

    cout<<s<<"\n";

    return 0;
}