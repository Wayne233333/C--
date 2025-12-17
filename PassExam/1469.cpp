#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    while(scanf("%d%d%d",&a ,&b ,&c) != EOF){

        if(c == 0){
            printf("0\n");
            continue;
        }
        printf("%d\n",(a+b)/c);
    }
    return 0;
}