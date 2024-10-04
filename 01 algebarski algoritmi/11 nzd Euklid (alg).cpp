#include <bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

llu nzdEuklid(llu a,llu b){
    while(b!=0){
        llu tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}
int main(){
    llu a,b;
    cin>>a>>b;
    cout<<nzdEuklid(a,b);
}
