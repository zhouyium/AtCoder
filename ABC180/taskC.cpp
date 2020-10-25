//https://atcoder.jp/contests/abc180/tasks/abc180_c
//C - Cream puff
#include <iostream>
#include <set>
using namespace std;
int main() {
    long long n;
    cin>>n;

    set<long long> ans;
    for (long long i=2; i*i<=n; i++) {
        if (0==n%i) {
            ans.insert(i);
            ans.insert(n/i);
        }
    }

    set<long long>::iterator it;
    for(it=ans.begin(); it!=ans.end(); it++) {
        cout<<*it<<"\n";
    }
    cout<<n<<"\n";
    return 0;
}