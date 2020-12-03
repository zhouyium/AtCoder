//https://atcoder.jp/contests/agc049/tasks/agc049_a
//A - Erasing Vertices
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<pair<int, int>> relation;//关系

    for (int i=0; i<n; i++) {
        string s;
        cin>>s;
        for (int j=0; j<s.length(); j++) {
            //建立关系
            if ('1'==s[j]) {
                relation.push_back({i, j});
            }
        }
    }

    long long ans=0;
    if (0==relation.size()) {
        cout<<fixed<<setprecision(18)<<n<<"\n";
        return 0;
    }
    for (int i=0; i<n; i++) {
        vector<pair<int, int>> t(relation);
        queue<int> next;
        //找到第一个
        vector<pair<int, int>>::iterator it;
        for (it=t.begin(); it!=t.end(); ) {
            if (it->first==i) {
                next.push(it->second);
                it=t.erase(it);
            } else {
                it++;
            }
        }

        while (false==t.empty()) {
            bool flag=false;
            while (false==next.empty()) {
                for (it=t.begin(); it!=t.end(); ) {
                    if (it->first==next.front()) {
                        next.push(it->second);
                        it=t.erase(it);
                        flag=true;
                    } else {
                        it++;
                    }
                }
                next.pop();
            }
            if (false==flag) {
                ans++;
                it=t.begin();
                next.push(it->first);
            }
        }
        ans++;
    }
    cout<<fixed<<setprecision(18)<<1.0*ans/n<<"\n";

    return 0;
}