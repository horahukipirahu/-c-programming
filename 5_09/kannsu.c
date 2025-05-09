//c言語関数について
//特定の処理をまとめたプログラム
#include <stdio.h>

int add(int a, int b);
int add5(int a);

int main(void) {
    printf("%d\n",add(3,5));
}
//メイン関数は、プログラム全体で最初に実行される関数
int add(int a, int b){
    return a+b;
}

int add5(int a){
    a=a+5;
    return a;
}