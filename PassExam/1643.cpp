#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    int d;
    while(scanf("%d%d%d",&a ,&b ,&c) != EOF){

        if(a < b) swap(a ,b);
        while(a % b != 0){

            d = a%b;
            a = b;
            b = d;
        }
        
        if(b < c)   swap(b ,c);
        while(b % c != 0){

            d = b%c;
            b = c;
            c = d;
        }
        printf("%d\n",c);
    }
    return 0;
}