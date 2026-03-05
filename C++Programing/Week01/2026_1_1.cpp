#include<iostream>
#include<algorithm>
using namespace std;

struct point{

    double x;
    double y;
};

bool cmp(const point &a, const point &b){

    if(a.x != b.x) return a.x > b.x;
    return a.y > b.y;
}

void sort(point a[], int n){    //冒泡排序

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n-i+1; j++){
            if(cmp(a[j], a[j+1])){

                swap(a[j], a[j+1]);
            }
        }
    }
}

point a[1001];
int n;

int main(){

    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%lf%lf", &a[i].x, &a[i].y);

    sort(a, n);

    for(int i = 1; i <= n; i++) printf("%.2lf %.2lf\n", a[i].x, a[i].y);
}