#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    string s="";
    scanf("%d",&n);
    while(n){
        
        s = char(int('0') + n%2) + s;
        n/=2;
    }

    cout<<s;
    return 0;
}