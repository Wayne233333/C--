#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    int x[10000], y[10000];
    int ans = 0;
    while(scanf("%d",&n) != EOF){

        for(int i = 0; i < n; i++) scanf("%d%d",&x[i], &y[i]);
        sort(y, y+n);

        ans = 0;
        for(int i = 0; i < n/2; i++)    ans += y[n/2] - y[i];
        for(int i = n/2+1; i < n; i++)  ans += y[i] - y[n/2];
        printf("%d\n",ans);
    }
    return 0;
}