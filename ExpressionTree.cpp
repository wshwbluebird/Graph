////
//// Created by wshwbluebird on 16/7/22.
////
//#include <iostream>
//using  namespace std;
//const int MAXN = 1000;
//int lch[MAXN],rch[MAXN];
//char op[MAXN];
//int nc= 0;//节点数
//
////方法 : 找到最后的运算符 然后递归处理
//
//int build_optree(char *s , int x,int y){
//      int i ,c1 = -1 , c2 = -1,p=0;
//      int u;
//       if(y-x==1){  //如果只有一个 节点
//           u = ++nc;  //存储这个节点
//           lch[u] = rch[u] = 0;  //左右都没有新的节点
//           op[u] = s[x]; //  节点进入 队列
//           return u;
//       }
//
//    for ( i = x; i < y; ++i) {
//        switch (s[i]){
//            case '(' : p++; break;
//            case ')' : p--; break;
//            case '+' : case '-' : if(!p) c1 = i ; break; //判断这个加号是否在括号的外面
//            case '*' : case '/' : if(!p) c2 = i ; break;
//        }
//    }
//
//    if(c1 < 0 ) c1 =c2 ; //如果没有括号外面的 加减号   那么优先计算的就是括号外面的乘除号
//    if(c1 < 0 ) return build_optree(s,x+1,y-1);//如果没有 括号外的加号 或者 乘除号 说明 整个表达式 被一对括号扩起来
//    u = ++nc;
//    lch[u] = build_optree(s,x,c1);
//    rch[u] = build_optree(s,c1+1,y);
//    op[u] = s[c1];
//    return u;
//
//
//}
//
//
//
//int main(){
//
//    return 0;
//}
