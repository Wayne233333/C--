#include<bits/stdc++.h>
using namespace std;
int n[5][5];
int f[5];
int ans;
int Max;

void dfs(int c){

    if(c == 5){
        
        Max = 0;
        for(int i=1; i<=4; i++) Max += n[f[i]][i];
        if(ans < Max) ans = Max;
        return;
    }
    for(int i=1; i<=4; i++){

        if(!f[i]){

            f[i] = c;
            dfs(c+1);
            f[i] = 0;
        }
    }
    return;
}

int main(){

    while(scanf("%d",&n[1][1]) != EOF){

        ans = 0;
        memset(f,0,sizeof(f));
        for(int j=2; j<=4; j++) scanf("%d",&n[1][j]);
        for(int i=2; i<=4; i++)
            for(int j=1; j<=4; j++) scanf("%d",&n[i][j]);
        dfs(1);
        printf("%d\n",ans);
    }
    return 0;
}