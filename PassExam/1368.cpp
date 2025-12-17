#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,a[2001];
    int i;
    while(scanf("%d",&n) != EOF){

        for(i = 1; i <= n; i++) scanf("%d",&a[i]);
        scanf("%d",&m);
        for(i = n+1; i <= n+m; i++) scanf("%d",&a[i]);
        
        sort(a+1, a+1+m+n);
        
        printf("%d",a[1]);
        for(i = 2; i <= n+m; i++)   printf(" %d",a[i]);
        printf("\n");
    }

    return 0;
}