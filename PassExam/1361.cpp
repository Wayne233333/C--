#include<cstdio>
#include<cmath>
using namespace std;
int main(){

    double a,b,c,d;
    while(scanf("%lf %lf %lf %lf",&a ,&b ,&c ,&d) != EOF){
        
        printf("%.2lf\n",pow(pow(a - c ,2) + pow(b - d ,2),0.5));
    }

    return 0;
}