#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main(){

    string s;
    bool op;
    while(getline(cin,s)){

        if(s == "0")    break;

        int len = s.length();
        op = true;
        for(int i = 0; i < len/2; i++){

            if(s[i] != s[len - 1 - i]){

                printf("No\n");
                op = false;
                break;
            }
        }

        if(op)  printf("Yes\n");
    }

    return 0;
}