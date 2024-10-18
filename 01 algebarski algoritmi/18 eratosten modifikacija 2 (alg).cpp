//https://www.petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/broj_prostih_u_intervalima
#include<bits/stdc++.h>

#define MAX 1000000

using namespace std;

vector<unsigned> najmanjiDelioci;

void napraviSito2(unsigned n){
    najmanjiDelioci.resize(n+1);
    for(unsigned i=0; i<=n;i++) najmanjiDelioci[i]=i;
    unsigned korenN= sqrt(n);
    for(unsigned i=2; i<=korenN;i++)
        if (najmanjiDelioci[i]==i)
         for(unsigned k=i*i;k<=n;k+=i)
            if (najmanjiDelioci[k]==k)
                najmanjiDelioci[k]=i;
}

void ispisi(){
    for (auto x : najmanjiDelioci ) cout << x << ' ';
    cout << endl;
}

int main(){
    unsigned n;
    cin >> n;
    napraviSito2(n);
    ispisi();

}
