#include<cstdio>
#include<cmath>
using namespace std;
int main(){

    int a,b;
    while(scanf("%d %d",&a ,&b) != EOF){

        a = int(abs(a)) % 10;
        b = int(abs(b)) % 10;
        printf("%d\n",(a + b) % 10);
    }

    return 0;
}