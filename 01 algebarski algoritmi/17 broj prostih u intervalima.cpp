//https://www.petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/broj_prostih_u_intervalima
#include<bits/stdc++.h>

#define MAX 1000000

using namespace std;

vector<unsigned> brojProstih;

void napraviSito1(unsigned n){
    brojProstih.resize(n+1,1);
    brojProstih[0]=0;
    brojProstih[1]=0;
    unsigned korenN= sqrt(n);
    for(unsigned i=2; i<=korenN;i++)
        if (brojProstih[i]==1)
         for(unsigned k=i*i;k<=n;k+=i) brojProstih[k]=0;

    for(unsigned i=2; i<=n; i++) brojProstih[i]+=brojProstih[i-1];
}


int main(){
    napraviSito1(MAX);
    unsigned n;
    cin >> n;
    for (unsigned i =1; i<=n;i++){
        unsigned a,b;
        cin >> a >> b;
        cout << (brojProstih[b]-brojProstih[a-1])<<endl;
    }

}
