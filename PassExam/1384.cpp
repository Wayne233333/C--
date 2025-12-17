#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){

        scanf("%d",&m);
        if(m == 1){
            if(i!=1)    printf("\n");
            printf("Yes");
            continue;
        }
        while(m%2 == 0 && m!=2) m/=2;

        if(i!=1)    printf("\n");
        if(m!=2)   printf("No");
        else    printf("Yes");
    }

    return 0;
}