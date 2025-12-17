#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    int c;
    while(scanf("%d",&n) != EOF){

        c = 0;
        while(n){

            if(n%10 == 4)   c++;
            n/=10;
        }
        printf("%d\n",c);
    }
    return 0;
}