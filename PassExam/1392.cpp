#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(scanf("%d",&n) != EOF){

        for(int i=n; i>=1; i--){

            for(int j=1; j<=i; j++) cout<<'*';
            cout<<endl;
        }
    }

    return 0;
}