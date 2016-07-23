////
//// Created by wshwbluebird on 16/7/23.
////
//
//
//#include <iostream>
//using namespace std;
//
//const int maxn  =1000;
//int d[maxn][maxn];
//const int INF = 200000;
//int n , m;
//void initf(){
//    cin>>n>>m;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n ; ++j) {
//            d[i][j] = (i==j? 0 : INF);
//        }
//    }
//    for (int k = 0; k < m ; ++k) {
//        int x ,  y;
//        cin>>x>>y>>d[x][y];
//    }
//}
//
//void Floyd(){
//    initf();
//    for (int k = 0; k < n; ++k) {
//        for (int i = 0; i < n ; ++i) {
//            for (int j = 0; j < n  ; ++j) {
//                if(d[i][k]<INF&&d[k][j]<INF)
//                    if(d[i][j] < d[i][k] + d[k][j])  d[i][j] = d[i][k] + d[k][j];
//            }
//        }
//    }
//}