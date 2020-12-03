//https://atcoder.jp/contests/abc184/tasks/abc184_e
//E - Third Avenue
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
//#define __LOCAL

const int MAXH=3;//2e3+4;
const int MAXW=8;//2e3+4;
char maze[MAXH][MAXW];
int cost[MAXH][MAXW];

int h,w;
pair<int, int> qd;
pair<int, int> zd;
vector<pair<int, int>> tele[26];

const int dx[]={0, 1, 0, -1};
const int dy[]={-1, 0, 1, 0};

void bfs() {
    queue<pair<int, int>> q;
    q.push(qd);
    cost[qd.first][qd.second]=0;

    while (true!=q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        int nc=cost[cur.first][cur.second]+1;//下一个位置的代价

        //新位置
        for (int i=0; i<4; i++) {
            int nx = cur.first+dx[i];
            int ny = cur.second+dy[i];

            //合法性判断
            if (nx<1||nx>h||ny<1||ny>w||'#'==maze[nx][ny]) {
                continue;
            }
            //
            if (nc<cost[nx][ny]) {
                cost[nx][ny]=nc;
                q.emplace(nx, ny);
            }
        }

        //如果是传送点
        if (maze[cur.first][cur.second]>='a' && maze[cur.first][cur.second]<='z') {
            //将所有的
            vector<pair<int, int>> &t=tele[maze[cur.first][cur.second]-'a'];
            vector<pair<int, int>>::iterator it;
            for (it=t.begin(); it!=t.end(); it++) {
                if (nc<cost[it->first][it->second]) {
                    cost[it->first][it->second]=nc;
                    q.emplace(it->first, it->second);
                }
            }
            t.clear();
        }

    }
}

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    
    cin>>h>>w;
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            cost[i][j]=INT_MAX;

            cin>>maze[i][j];
            if ('S'==maze[i][j]) {
                //起点
                qd.first=i;
                qd.second=j;
                cost[i][j]=0;
            } else if ('G'==maze[i][j]) {
                zd.first=i;
                zd.second=j;
            } else if (maze[i][j]>='a' && maze[i][j]<='z') {
                tele[maze[i][j]-'a'].emplace_back(i, j);
            }
        }
    }

    //开始BFS
    bfs();

    int ans=cost[zd.first][zd.second];
    if (INT_MAX==ans) {
        ans=-1;
    }
    cout<<ans<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}