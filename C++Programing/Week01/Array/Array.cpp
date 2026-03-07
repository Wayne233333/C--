#include"Array.h"
#include<iostream>

Array::Array(){ //初始化
    
    cnt = 0;
}

void Array::addr(int num){

    cnt++;
    a[cnt] = num;
}

void Array::pop(){

    if(cnt > 0) cnt--;
}

void Array::print(){

    for(int i = 1; i <= cnt; i++){

        printf("%d", a[i]);
        if(i != cnt)    printf(" ");
    }
    printf("\n");
}

int Array::printcnt(){

    return cnt;
}

bool Array::isExist(int num){

    for(int i = 1; i <= cnt; i++){

        if(a[i] == num)   return true;
    }
    return false;
}