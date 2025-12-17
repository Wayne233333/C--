#include<bits/stdc++.h>
using namespace std;
int main(){

    int bottle[4];
    int n;
    int l,r;
    while(scanf("%d%d%d",&bottle[1] ,&bottle[2] ,&bottle[3]) != EOF){

        scanf("%d",&n);
        for(int i=1; i<=n; i++){

            scanf("%d%d",&l ,&r);
            if(bottle[l] + bottle[r] > 20){

                bottle[l] = bottle[l] + bottle[r] - 20;
                bottle[r] = 20;
            }
            else{

                bottle[r] = bottle[r] + bottle[l];
                bottle[l] = 0;
            }
        }
        printf("%d %d %d\n",bottle[1] ,bottle[2] ,bottle[3]);
    }
    return 0;
}