#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    int f[20];
    int a,b;
    bool op;
    while(scanf("%d%d",&n ,&m) != EOF){

        memset(f,0,sizeof(f));
        for(int i=1; i<=m; i++){

            scanf("%d%d",&a ,&b);
            f[a]++;
            f[b]++;
        }

        op = 1;
        for(int i=1; i<=n; i++){

            if(f[i] == 0 || f[i]%2 == 1){

                op = 0;
                break;
            }
        }

        if(op)  printf("Yes\n");
        else    printf("No\n");
    }

    return 0;
}