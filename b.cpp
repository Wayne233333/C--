#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n;
    long long Max,Min;
    long long f[4];
    long long a[100001],b[100001];
    cin>>t;
    while(t--){

        cin>>n;
        Max=0;
        Min=0;
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++) cin>>b[i];

        for(int i=1; i<=n; i++){

            f[0] = Max - a[i];
            f[1] = Min - a[i];
            f[2] = b[i] - Max;
            f[3] = b[i] - Min;

            Max = *max_element(f, f + 4);
            Min = *min_element(f, f + 4);
        }

        cout<<Max<<endl;
    }

    return 0;
}