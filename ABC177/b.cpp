//https://atcoder.jp/contests/abc177/tasks/abc177_b
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin>>s>>t;

    int lenS=s.length();
    int lenT=t.length();
    int ans=1e4;
    for (int i=0; i+lenT<=lenS; i++) {
        int change=0;
        for (int j=0; j<lenT; j++) {
            if (s[i+j]!=t[j]) {
                change++;
            }
        }
        ans = min(ans, change);
    }

    cout<<ans<<"\n";

    return 0;
}