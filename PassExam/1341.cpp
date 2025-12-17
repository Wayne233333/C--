#include<cstdio>
using namespace std;
int main(){

    int n;
    int c,sum;
    // 使用 scanf 返回值判断是否到达 EOF：当成功读取到一个整数时 scanf 返回 1
    while(scanf("%d", &n) != EOF){
        
        for(int i = 1; i <= n; i++){

            sum = 0;
            for(int j = 1; j <= 5; j++){

                scanf("%d",&c);
                sum += c;
            }

            printf("%c\n",char('a' + sum % 26));
        }

    }
    
    return 0;
}