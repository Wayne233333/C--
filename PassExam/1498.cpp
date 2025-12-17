#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s = "           *\n         *   *\n   *   *       *   *\n     *           *\n       *   *   *\n      * *     * *\n     *           *";
    int n;
    scanf("%d",&n);
    while(n){

        for(int i=1; i<=n; i++) cout<<s<<endl;
        scanf("%d",&n);
    }
    return 0;
}