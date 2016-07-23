////
//// Created by wshwbluebird on 16/7/23.
////
//
//#include<iostream>
//#include <queue>
//using namespace std;
////与dijikstra 的 区别  一个节点 可以多次 进入队列
//
//queue<int> q;//队列里存储的 要搜索的节点
//const int MAXN =1000;
//const int INF = 2147483646;
//int v[MAXN],u[MAXN],w[MAXN];
//int n , m ;
//int first[MAXN];
//int nexte[MAXN];
////默写 复习链表存储
//void read_tree(){
//    cin>>n>>m;
//    for (int i = 0; i < n; ++i) {
//        first[i] = -1;//初始化 链表头
//    }
//    for (int i = 0; i < m ; ++i) {
//        cin>>u[i]>>v[i]>>w[i];
//        nexte[i] = first[u[i]];
//        first[u[i]]  = i;
//    }
//}
//
//int d[MAXN];
//void Bellman_ford(){
//    bool  inq[MAXN];
//    memset(inq,0,sizeof(inq));
//    for (int i = 0; i < n ; ++i) d[i]=(i==0?0:INF);
//    q.push(0);
//    while(!q.empty()){
//        int x = q.front();
//        q.pop();
//        inq[x] = false;
//        for (int e = first[x]; e != -1; e = nexte[e]) {
//            if(d[v[e]] > d[x] + w[e]){
//                d[v[e]] = d[x] + w[e];
//                if(inq[v[e]]){
//                    inq[v[e]]  =true;
//                    q.push(v[e]);
//                }
//            }
//        }
//    }
//
//
//
//
//};
//int main(){
//
//
//
//    return 0;
//}