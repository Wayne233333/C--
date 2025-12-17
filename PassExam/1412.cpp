#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    while(scanf("%d%d",&n ,&m) != EOF){

        for(int i=1; i<=m; i++) printf("#");
        printf("\n");
        for(int i=2; i<n; i++){
            
            printf("#");
            for(int j=2; j<m; j++)  printf(" ");
            printf("#\n");
        }

        for(int i=1; i<=m; i++) printf("#");
        printf("\n\n");
    }

    return 0;
}