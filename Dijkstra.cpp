////
//// Created by wshwbluebird on 16/7/23.
////
////O(n^2)
//#include <iostream>
//
//using namespace std;
//
//const int MAXN =1000;
//const int INF= 2148473646;
//int d[MAXN];// 存储 从初始节点 到该节点的最大路径
//int W[MAXN][MAXN]; //用临街矩阵 存储 两个节点之间的距离
//int fa[MAXN];//存储当前节电的父亲节点
//int v[MAXN];//判断这个节点知否搜索过
//int n ;//节点数
//void Dijikstra(){
//    memset(v,0,sizeof(v));
//
//    for (int i = 0; i < n  ; ++i)   d[i] =(i==0? 0:INF); //除了初始节点 其余节点 都被存储为0
//    for (int i = 0; i < n  ; ++i) {
//        int x , m =INF;
//        for (int j = 0; j < n ; ++j) if(!v[j]&&d[j]<=m) m=d[x=j]; //找到距离初始节点最近并且没有搜索过的节点的节点
//        v[x] = 1; // 表示 标号为x的节点已经搜索过了
//        for (int j = 0; j < n; ++j) {  //以这个节点为 过渡节点进行搜索
//            int temp  = d[x]+W[x][j];
//            if(d[j]<temp)  {
//                d[j] = temp;
//                fa[j] = x;  //存储当前的当前的父亲的节点  方便 追踪  打印最短路径
//            }
//        }
//
//    }
//
//}
//
//
//int main(){
//
//    return  0;
//}