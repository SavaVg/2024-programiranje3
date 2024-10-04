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
    llu i, j, k;
    cin>>i>>j>>k;
    llu ijk=nzs(nzs(i,j),k);
    llu res = ijk/i*200 + ijk/j*500 + ijk/k*1000;
    cout<<res;
}
