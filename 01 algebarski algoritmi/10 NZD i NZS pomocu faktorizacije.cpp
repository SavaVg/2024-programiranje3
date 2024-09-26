#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned llu;

void ispisi(map<llu,int>& a){
    if(a.empty()){
        cout<<"nema faktorizacije\n";
        return;
    }
    for(auto x: a)
        cout<<x.first<< " " << x.second<<endl;
}

void faktorisi(llu n, map<llu,int>& faktorizacija){
    llu i=2;
    while (i*i<=n) {
        while(n%i==0){
            faktorizacija[i]++;
            n/=i;
        }
        i++;
    }
    if (n!=1) faktorizacija[n]=1;

}

void odrediNZD(map<llu,int>& a, map<llu,int>& b, map<llu,int>& nzd){
    for (auto x : a){
        if (x.second <= b[x.first]) nzd[x.first]=x.second;
        else nzd[x.first]= b[x.first];
    }
}

int main(){
    llu a,b;
    cin>>a>>b;

    map<llu,int> fa;
    faktorisi(a, fa);

    map<llu,int> fb;
    faktorisi(b, fb);

    map<llu,int> fnzd;
    odrediNZD(fa,fb,fnzd);
    ispisi(fnzd);

}























