////
//// Created by wshwbluebird on 16/7/23.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//queue<int> q;
//const int maxn =1000;
//const int INF =10000;
//
//int flow[maxn][maxn];//已经从这条路径 运过去的 流的大小
//;int cap[maxn][maxn];
//int a[maxn];//到哪个节点 可以增加的 流量的最大值
//int f;
//int p[maxn];
//
//int s,t;
//int  n ;
//void bfs(){
//    memset(flow,0,sizeof(flow));
//    f = 0;
//    for (;;) {
//        memset(a,0, sizeof(a));
//        a[s] = INF;
//        q.push(s);
//        while(!q.empty()){
//            int u  = q.front();
//            q.pop();
//            for (int v = 1; v <= n  ; ++v) {
//                if(!a[v]&&cap[u][v]>flow[u][v]){
//                    p[v] = u;
//                    q.push(v);
//                    if(a[u]<cap[u][v]-flow[u][v]) a[u] = cap[u][v]-flow[u][v];
//                    a[v] = a[u];
//                }
//            }
//        }
//        if(a[t]==0) break;
//        for (int u = t; u != s; u = p[u]) {
//            flow[p[u]][u]  += a[t];
//            flow[u][p[u]]   -= a[t];
//        }
//        f+= a[t];
//    }
//}
//
//int main(){
//
//    return 0;
//}