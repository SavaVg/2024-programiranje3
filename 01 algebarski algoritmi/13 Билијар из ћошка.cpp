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
llu nzs(llu a,llu b){
    return a*(b/nzdEuklid(a,b));
}

int main(){
    llu m, n;
    cin>>m>>n;
    llu mn=nzs(m,n);
    llu k1=mn/m;
    llu k2=mn/n;
    llu pk, dk;
    if (k1%2==1) pk=m;
    else pk=0;

    if (k2%2==1) dk=n;
    else dk=0;

    cout<< pk << ' '<<dk<<endl<<k1+k2-2;
}
