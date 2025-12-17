#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    int n;
    int cnt;
    string s;
    cin>>t;
    while(t--){

        cin>>n;
        cnt = 0;
        for(int i=1; i<=n; i++){
            cin>>s;
            for(int j=0; j<s.length(); j++){
                if(s[j] != '#') cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}