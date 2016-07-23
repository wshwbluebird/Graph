////
//// Created by wshwbluebird on 16/7/23.
////
//
//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <string.h>
//
////正权图的 邻接表 广搜队列法
////优先队列的使用方法  !!!!!!!pair
//
//using namespace std;
//
//int n , m ;//n表示 节点的个数   m表示边的个数
//const int MAXN = 1000;
//const int INF = 2148473646;
//int first[MAXN];//first[u]  表示 第u个节点的第1边
//int u[MAXN],v[MAXN],w[MAXN],nexte[MAXN];
//
//void read_graph(){
//    cin>>n>>m;
//    for (int i = 0; i < n ; ++i) {
//        first[i] = -1; //初始化 表头
//    }
//    for (int e = 0; e < m; ++e) {
//        cin>>u[e]>>v[e]>>w[e];
//        nexte[e] = first[u[e]];
//        first[u[e]] = e;  //从表头插入 节省了  遍历表的时间   有多少个节点就有多少个表  每个表存储当前节点连接的所有边的的序号
//    }
//}
//
//bool done[MAXN];
//typedef  pair<int ,int > pii;
//priority_queue<pii,vector<pii>,greater<pii> > q ;
//int d[MAXN];
//
//void Dijikstra_better(){
//    for (int i = 0; i < n; ++i) d[i] = (i==0?0:INF);
//    memset(done , 0 , sizeof(done));//初始化  ,所有的节点 都没有算出来
//    q.push(make_pair(d[0],0));//起点进入优先队列
//    while(!q.empty()){
//        pii u  = q.top();
//        q.pop();
//        int x = u.second;
//        if(done[x]) continue;
//        done[x]  =  true;
//        for (int e = first[x]; e != -1 ; e = nexte[e]) {
//            if(d[v[e]]>w[x]+d[x]){
//                d[v[e]]=w[x]+d[x];         //松弛 该节点的答案
//                q.push(make_pair(d[v[e]],v[e]));// 新搜到的节点 入队  (广度优先搜索队列)
//            }
//        }
//
//    }
//
//
//}
//
//int main(){
//
//
//    return 0;
//}