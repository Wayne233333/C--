#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int a[21];
    while(scanf("%d",&n) != EOF){

        for(int i=1; i<=n; i++) scanf("%d",&a[i]);
        sort(a+1, a+1+n);
        printf("%d",a[1]);
        for(int i=2; i<=n; i++) printf(" %d",a[i]);
        printf("\n");
    }

    return 0;
}