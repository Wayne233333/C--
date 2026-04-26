#include<iostream>
using namespace std;
int main(){

    long long n;
    long long ans;
    cin >> n;
    while(n){

        ans = 1;
        for(long long i=1; i<=n; i++)   ans = ans * (4*i - 2) / (i + 1);
        printf("%lld: %lld\n",n ,ans);
        cin >> n;
    }
    return 0;
}