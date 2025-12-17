#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    int a[1001];
    bool op = 1;
    bool op2;
    while(scanf("%d%d",&n ,&k) != EOF){
        
        if(k <= 0){
            printf("\n");
            continue;
        }

        op2 = 1;
        memset(a,1,sizeof(a));
        for(int i = 2; i<=k; i++){

            for(int j = i; j <= n; j += i)  a[j]++;
        }

        if(!op) printf("\n\n");
        if(op)  op = 0;

        for(int i = 1; i <= n; i++){

            if(a[i] % 2){
                if(!op2)    printf(" ");
                if(op2) op2 = 0;
                printf("%d",i);
            }
        }
    }

    return 0;
}