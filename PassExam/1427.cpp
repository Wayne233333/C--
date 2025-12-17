#include<bits/stdc++.h>
using namespace std;
int main(){

    double n,a;
    int m;
    while(scanf("%lf%lf%d",&n ,&a ,&m) != EOF){
        for(int i=1; i<=m; i++) n*=(1+a/100);
        printf("%.0lf\n",n);
    }

    return 0;
}