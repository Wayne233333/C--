#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    double sum;
    double a;
    while(scanf("%d",&n) != EOF){

        sum = 0;
        for(int i=1; i<=n; i++){

            scanf("%lf",&a);
            sum += a;
        }

        cout<<round(sum/n)<<endl;
    }
    
    return 0;
}