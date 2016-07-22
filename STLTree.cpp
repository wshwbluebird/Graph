////
//// Created by wshwbluebird on 16/7/22.
////
//
//#include<iostream>
//#include <vector>
//
//using namespace std ;
//const  int MAXN = 1000;
//vector<int> G[MAXN];
//
//int n;
//
//void readTree(){
//    int u , v;
//    for (int i = 0; i < n-1 ; ++i) {
//        cin>>u>>v;
//        G[u].push_back(v); //插入最后一个 元素
//        G[v].push_back(u);
//    }
//}
//
//void dfs(int u , int fa){ //转化为  以u 为根的树, u的父亲为fa  也可以表示为  -1 是所有树的父亲
//    int d = G[u].size();
//    for (int i = 0; i < d ; ++i) {
//        int v = G[u][i];
//        if(v!=fa)  dfs(v,u);  //以当前节点为跟节点的继续深度优先搜索
//
//    }
//
//}
//int main(){
//
//
//
//    return 0;
//}