//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
//HHKB Programming Contest 2020
//C - Neq Min
/*
使用 STL set
先将 0 ~ 2e5 所有数据插入 set 中。
然后读取数据，有的数据，从 set 中删除。
*/
#include <iostream>
#include <set>

using namespace std;

const int MAXN=2e5+4;

int main() {
    //快读
    ios::sync_with_stdio(false);
    //cin.tie(0);

    //讲所有数据标记
    set<int> st;
    for (int i=0; i<=MAXN; i++) {
        st.insert(i);
    }

    int n;
    cin>>n;

    int x;
    for (int i=0; i<n; i++) {
        cin>>x;

        st.erase(x);
        cout<<*st.begin()<<"\n";
   }

    return 0;
}