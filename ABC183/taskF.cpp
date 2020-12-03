//https://atcoder.jp/contests/abc183/tasks/abc183_f
//F - Confluence
//并查集

#include <bits/stdc++.h>

using namespace std;

const int MAXN=2e5+4;
vector<int> parent(MAXN, -1);

int find_parent(int u) {
    if (parent[u]<0) {
        return u;
    }
    return parent[u] = find_parent(parent[u]);
}

void union_set(int u, int v) {
    u = find_parent(u);
    v = find_parent(v);
    if (u==v) {
        return;
    }
    if (parent[u]>parent[v]) {
        swap(u, v);
    }
    parent[u] += parent[v];
    parent[v] = u;
}

int size(int u) {
    return -parent[find_parent(u)];
}

int main() {
    int n, q;
    cin>>n>>q;

    //初始化班级
    for (int i=1; i<=n; i++) {
        int t;
        cin>>t;
        //union_set(i, t);
    }

    //Q动作
    for (int i=1; i<=q; i++) {
        int act, u, v;
        cin>>act>>u>>v;
        if (1==act) {
            //合并
            union_set(u, v);
        } else if (2==act) {
            //查询
            cout<<size(v)<<"\n";
        }
    }

    return 0;
}