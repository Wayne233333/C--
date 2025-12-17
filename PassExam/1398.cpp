#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    int c;
    while(scanf("%d%d",&a ,&b) != EOF){

        c = 0;
        for(int i=1; i<=b; i++){

            for(int j=1; j<=a; j++){

                printf("%c",char(97+c));
                c = (c+1)%26;
            }

            printf("\n");
        }
        printf("\n");
    }

    return 0;
}