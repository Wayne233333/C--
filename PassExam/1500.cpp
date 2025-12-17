#include<bits/stdc++.h>
using namespace std;
int main(){

    double n;
    double ans;
    cin >> n;
    while(n){

        ans = 1;
        for(double i=n+2; i<=n*2; i++) ans = ans * i / (i-n);
        printf("%.0f: %.0f\n",n ,ans);
        cin >> n;
    }
    return 0;
}