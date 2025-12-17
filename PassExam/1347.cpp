#include<cstdio>
#include<algorithm>
using namespace std;
int main(){

    int n;
    int a,b;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){

        scanf("%d%d",&a ,&b);
        if(a < b)   swap(a,b);
        while(a % b != 0){

            int r = a % b;
            a = b;
            b = r;
        }
        printf("Case %d: %d\n",i ,b);
    }
    return 0;
}