//https://atcoder.jp/contests/arc107/tasks/arc107_c
//C - Shuffle Permutation
/*
使用并查集
*/
#include <bits/stdc++.h>

using namespace std;

template <class T>
struct _DISJOINTSET {
    T _st;//起点
    T _ed;//终点
    map<T, T> ds;//并查集
    map<T, T> ranks;

    _DISJOINTSET() : _st(0), _ed(0) {}
    _DISJOINTSET(T st, T ed) {
        init(st, ed);
    }

    /*
    st 表示起点
    ed 表示终点
    */
    void init(T st, T ed) {
        if (ed<st) {
            return;
        }
        for (T i=st; i<=ed; i++) {
            ds[i]=i;
            ranks[i]=0;
        }
        _st = st;
        _ed = ed;
    }

    //查找x的父亲
    T find_root(T x) {
        return x==ds[x]?x:ds[x]=find_root(ds[x]);
    }
 
    //建立关系
    void union_set(T x, T y) {
        T x_root=find_root(x);
        T y_root=find_root(y);
        if (x_root!=y_root) {
            if (ranks[x_root]>ranks[y_root]) {
                ds[y_root]=x_root;
            } else if (ranks[x_root]<ranks[y_root]) {
                ds[x_root]=y_root;
            } else {
                ds[x_root]=y_root;
                ranks[y_root]++;
            }
        }
    }

    //查找x和y是否在同一个父亲
    bool relation(T x, T y) {
        return find_root(x)==find_root(y);
    }

    //获取跟节点
    std::vector<std::vector<T>> groups() {


        std::vector<std::vector<T>> result(_n);
        return result;
    }
};

const int MAXN=50+4;
int arr[MAXN][MAXN];
struct _DISJOINTSET<int> dsCol;//列并查集
struct _DISJOINTSET<int> dsRow;//行并查集

int main() {
    int n,k;
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>arr[i][j];
        }
    }
    dsRow.init(1, n);
    dsCol.init(1, n);

    //遍历建立行关系。
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            bool flag=true;
            for (int l=1; l<=n; l++) {
                if (arr[i][l]+arr[j][l]>k) {
                    flag=false;
                    break;
                }
            }
            if (true==flag) {
                //说明第 i 行和第 j 行可以交换
                dsRow.union_set(i,j);
            }
        }
    }
    //遍历建立列关系
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            bool flag=true;
            for (int l=1; l<=n; l++) {
                if (arr[l][i]+arr[l][j]>k) {
                    flag=false;
                    break;
                }
            }
            if (true==flag) {
                //说明第 i 列和第 j 列可以交换
                dsCol.union_set(i,j);
            }
        }
    }

    //遍历集合，查找答案





    return 0;
}