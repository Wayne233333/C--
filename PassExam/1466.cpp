#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[1001];
    int n;
    while(scanf("%d%d%d",&a[1] ,&a[2] ,&n) != EOF){

        for(int i=3; i<=n; i++) a[i] = abs(a[i-1]-a[i-2]);
        printf("%d\n",a[n]);
    }
    return 0;
}