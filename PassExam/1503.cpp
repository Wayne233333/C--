#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n;
    scanf("%d", &n);

    double a, b;
    double x1, y1, x2, y2;
    for(int i = 1; i <= n; i++){

        scanf("%lf %lf", &a, &b);

        x1 = -a/2 + sqrt(3)/2*b;
        y1 = -b/2 - sqrt(3)/2*a;
        x2 = -a/2 - sqrt(3)/2*b;
        y2 = -b/2 + sqrt(3)/2*a;
        
        if(y1 > y2 || (y1 == y2 && x1 > x2)){
            swap(x1, x2);
            swap(y1, y2);
        }
        printf("%0.3lf %0.3lf %0.3lf %0.3lf\n", x1, y1, x2, y2);
    }
    return 0;
}