#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    int a[101];
    bool op;
    while(scanf("%d",&n) != EOF){

        for(int i=1; i<=n; i++) scanf("%d",&a[i]);
        scanf("%d",&m);

        op = 0;
        for(int i=1; i<=n; i++){
            
            if(a[i] == m){

                op = 1;
                break;
            }  
        }

        if(op)  printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}