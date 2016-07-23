////
//// Created by wshwbluebird on 16/7/22.
////
////最小生成树
////并查集
//#include <iostream>
//using namespace std;
//
//const  int MAXN = 1000;
//int u[MAXN], v[MAXN],w[MAXN];
//int p[MAXN];
//int n,m; //m 为边的的数量
//int r[MAXN];
//int cmp(const int i , const int j){
//    return w[i]<w[j];
//}
//int findUS(int x){
//    return p[x]==x? x:p[x] = findUS(p[x]);   //并查集  : 快速查找 某个元素是否在一个集合当中
//}
//
//int Kruskal(){
//    int ans = 0;
//    for (int i = 0; i < n; ++i) {
//        p[i]=i; //对并查集进行初始化
//    }
//    for (int j = 0; j < m; ++j) {
//        r[j]=j;  //对边的序号进行 存储  方便简介排序
//    }
//
//    sort(r,r+m,cmp); // 排序  岁数组 r进行排序   排序标准为cmp
//    for (int i = 0; i < m ; ++i) {
//        int e = r[i] ; //当前权最小的边
//        int x,y;
//        if( x =findUS(u[e])!=(y =findUS(v[e]))){  //判断边的两个断电是否在同一集合中
//            ans+=w[e];
//            p[x] = y;  //将两个端点放入 同一集合中
//        }
//    }
//    return ans;
//}
//int mian(){
//
//    return 0;
//}