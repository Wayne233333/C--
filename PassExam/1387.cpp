#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int m,p;
    int t,k;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){

        scanf("%d%d",&m ,&p);
        for(int j=1; j<=p; j++){

            scanf("%d%d",&t ,&k);
            switch(t){
                case 1:
                    m+=k;
                    break;
                case 2:
                    m-=k;
                    break;
                case 3:
                    m*=k;
                    break;
                case 4:
                    m/=k;
                    break;
                case 5:
                    m%=k;
                    break;
            }
        }

        printf("%d\n",m);
    }

    return 0;
}