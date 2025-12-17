#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    int l,r;
    int a;
    while(scanf("%d%d",&n ,&x) != EOF){

        l=0,r=0;
        for(int i=1; i<=n; i++){

            scanf("%d",&a);
            if(a<x) l++;
            if(a>x) r++;
        }
        printf("%d\n%d\n\n",r,l);
    }
    return 0;
}