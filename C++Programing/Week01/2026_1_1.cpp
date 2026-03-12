#include<iostream>
#include<algorithm>
using namespace std;

struct point{

    int x;
    int y;
};

bool cmp(const point &a, const point &b){

    if(a.x != b.x) return a.x > b.x;
    return a.y > b.y;
}

void sort_bubble(point a[], int n){    //冒泡排序

    int temp;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n-i+1; j++){
            if(cmp(a[j], a[j+1])){

                temp = a[j].x;
                a[j].x = a[j+1].x;  
                a[j+1].x = temp;

                temp = a[j].y;
                a[j].y = a[j+1].y;
                a[j+1].y = temp;
            }
        }
    }
}

point a[1001];
int n;

int main(){

    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d%d", &a[i].x, &a[i].y);

    sort_bubble(a, n);

    for(int i = 1; i <= n; i++) printf("%d %d\n", a[i].x, a[i].y);
}