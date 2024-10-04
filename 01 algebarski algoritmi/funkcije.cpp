#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

bool jeProst(llu n){
    if (n==2) return true;
    if(n==1 || n%2==0) return false;
    llu i=3;
    while(i*i<=n) {
        if (n%i==0) return false;
        i+=2;
    }
    return true;
}

void faktorisi(llu ulaz, map<llu, int>& izlaz) {
    llu i=2;
    while (i*i<=ulaz) {
            while (ulaz%i==0) {
                izlaz[i]++;
                ulaz /= i;
            }
            i++;
    }

    if (ulaz!=1) izlaz[ulaz]++;
}

void nzd(map<llu, int>& fa, map<llu, int>& fb, map<llu, int>& fnzd){
    for (auto x: fa) if (fb[x.first]!=0) fnzd[x.first] = (fb[x.first]<=x.second ? fb[x.first] : x.second);
}

void nzs(map<llu, int>& fa, map<llu, int>& fb, map<llu, int>& fnzs){
    fnzs=fa;
    for (auto x: fb) if (x.second > fa[x.first])  fnzs[x.first] = x.second;
}

void ispisi(map<llu, int> m){
    for (auto x: m) cout << x.first << ' '<< x.second << endl;
}

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
