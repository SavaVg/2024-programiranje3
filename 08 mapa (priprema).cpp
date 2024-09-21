#include<bits/stdc++.h>

using namespace std;

void ispisi(map<int, int>& a){ //opet referenca
    if (a.empty()) { // metodom empty se proverava da li je mapa prazna. Slicno kao i kod skupa.
        cout << "prazna\n";
        return;
    }
    for (auto x : a)  // na ovaj nacin prolazimo kroz sve elemente mape
        cout << "kljuc: " << x.first << "; vrednost: " << x.second << endl; //ako je x element mape onda je x.first prva koordinata tj. kljuc, a x.second druga koordinata tj. vrednost
    cout << endl;
}

void ispisi(map<int, float>& a){ //opet referenca
    if (a.empty()) { // metodom empty se proverava da li je mapa prazna. Slicno kao i kod skupa.
        cout << "prazna\n";
        return;
    }
    for (auto x : a)  // na ovaj nacin prolazimo kroz sve elemente mape
        cout << "kljuc: " << x.first << "; vrednost: " << x.second << endl; //ako je x element mape onda je x.first prva koordinata tj. kljuc, a x.second druga koordinata tj. vrednost
    cout << endl;
}

int main(){
    /*
    Mapa je uopseni pojam matematicke funkcije, a to je skup uredjenih parova u kojem razliciti uredjeni parovi imaju razlicitu prvu koordinatu.
    Npr. u matematickoj notaciji skup  {(-1,1), (-3,9), (3,9)} je mapa, a skup {(-1,1), (-3,9), (-1,9)} to nije jer razlichiti parovi (-1,1) i (-1,9) imaju istu prvu koordinatu.
    Prva koordinata se u jeziku C++ naziva kljuc, a druga vrednost pridruzena kljucu.
    Dakle, u mapi {(-1,1), (-3,9), (3,9)} kljucevi su -1, -3 i 3, a njima odgovarajuce vrednosti su redom 1, 9 i 9.
    */
    map<int, float> b={{-1,1},{-3,9},{3,9}}; //Ovim je deklarisana mapa ciji su kljucevi tipa int, a vrednosti tipa float. A onda je incijalizovan tako da sadrzi uredjene parove (-1,1), (-3,9), (3,9).
    cout << "elementi mape b su:\n";
    ispisi(b);

    cout << "broj elemenata mape b je: "<< b.size() << endl; //metod size vraca broj elemenata (uredjenih parova) mape. Toliko ima i kljuceva u mapi.

    cout << "vrednost koja odgovara kljucu -3 je: "<< b[-3]<< endl; //kada se mapa indeksira sa kljucem dobijamo vrednost tog kljuca u toj mapi
    
    /*
    kada se mapa indeksira sa necim sto nije njen kljuc, tj. nije prva koorinata nijednog para,
    onda se u mapu dodaje par ciji je kljuc taj indeks, a njemu pridruzena vrednost je default vrednost tipa deklarisanog za tip vrednost mape (u ovom slucaju taj tip je float).
    Default vrednost za brojevne tipove je 0.
    */
    cout << "vrednost koja odgovara kljucu 2 je: "<< b[2]<< endl; 
    cout << "elementi mape b su:\n";
    ispisi(b);

    b[-3]=-13; // pomocu operatora dodeljivanja i indeksne notacije mozemo menjati vrednosti koje odgovaraju kljucevima u mapi
    b[1000]=99; // ali i dodavati nove parove u mapu. Npr. ovde je dodat par (1000,99) tj. par sa kljucem 1000 i vrednoscu 99
    cout << "elementi mape b su:\n";
    ispisi(b);
    
    b[1000]++; // mozemo i na ovaj nacin menjati vrednost datom kljucu. Fakticki kad indeksiramo kljucem mapu dobijamo izraz koji je referenca na vrednost koja je pridruzena tom kljuca
    cout << "elementi mape b su:\n";
    ispisi(b);

    b[-200]++; // zapravo kada indeks nije kljuc onda se pojavljivanjem takvog izraza najpre doda par sa tim kljucem i default vrednoscu, pa se onda taj izraz ponasa kao i kad je indeks kljuc
    cout << "elementi mape b su:\n";
    ispisi(b);

    b.clear(); //metodom clear se izbacuju svi elementi (parovi) iz mape, nakon cega mapa postaje prazna
    cout << "elementi mape b su:\n";
    ispisi(b);

    map<int, int> c;//ako ne inicijalizujemo mapu, ona je prazna. Ovde je deklarisana mapa ciju su kljucevi tipa int, a i vrednosti tipa int.
    cout << "elementi mape c su:\n";
    ispisi(c);
}