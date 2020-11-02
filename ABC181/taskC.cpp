    //https://atcoder.jp/contests/abc181/tasks/abc181_c
    //C - Collinearity
    #include <iostream>
    #include <algorithm>
     
    using namespace std;
     
    typedef struct _POS {
        int x;
        int y;
    } POS;
     
    const int MAXN=1e2+4;
    POS arr[MAXN];
     
    bool mycmp(const POS& a, const POS& b) {
        if (a.x!=b.x) {
            return a.x<b.x;
        } else {
            return a.y<b.y;
        }
    }
     
    int main() {
        int n;
        cin>>n;
        for (int i=1; i<=n; i++) {
            cin>>arr[i].x>>arr[i].y;
        }
     
        //暴力枚举
        for (int i=1; i<=n-2; i++) {
            for (int j=i+1; j<=n-1; j++) {
                for (int k=j+1; k<=n; k++) {
                    if ((arr[k].x-arr[i].x)*(arr[j].y-arr[i].y)==(arr[j].x-arr[i].x)*(arr[k].y-arr[i].y)) {
                        cout<<"Yes\n";
                        return 0;
                    }
                }
            }
        }
        cout<<"No\n";
     
        return 0;
    }