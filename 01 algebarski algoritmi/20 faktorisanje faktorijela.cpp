    #include<bits/stdc++.h>

    using namespace std;

    vector<unsigned> sito;

    void eratosten2(unsigned n){
        sito.resize(n+1);
        for (unsigned i=0; i<=n; i++) sito[i]=i;
        unsigned koren=sqrt(n);
        for (unsigned i=2; i<=koren; i++) {
            if(sito[i]==i){
                for(unsigned j=i*i; j<=n; j+=i){
                    if(sito[j]==j) sito[j]=i;
                }
            }

        }
    }

    void rastavi(unsigned n, map<unsigned, unsigned>& rastav){
        while (n!=1) {
            rastav[sito[n]]++;
            n/=sito[n];
        }
    }

    int main(){
        ios_base::sync_with_stdio(false);
        unsigned ulaz;
        cin >> ulaz;
        if (ulaz<=1){
            cout << "0\n";
            return 0;
        }
        eratosten2(ulaz);
        map<unsigned, unsigned> rastav;
        for (int i=2;i<=ulaz; i++) rastavi(i,rastav);

        unsigned rez=0;
        for (auto x:rastav) rez+=x.second;
        cout << rez<< endl;
    }
