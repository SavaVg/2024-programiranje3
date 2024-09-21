#include<bits/stdc++.h>

using namespace std;

void ispisi(set<int>& a){//ako nam ne treba kopija argumenta u funkciji, onda za parametar stavljamo da je referenca (&). Tada se argument prosledjuje po adresi - ne pravi se novi objekat
    if (a.empty()) { // metodom empty se proverava da li je skup prazan ili nije. Vraca true ako je prazan, u suprotnom false.
        cout << "prazan skup\n";
        return;
    }
    for (auto x : a) cout << x << ' '; // na ovaj nacin prolazimo kroz sve elemente skupa
    cout << endl;
}

int main(){
    set<int> b={1,7,-9,60}; //ovako mozemo inicijalizovati skup
    cout << "elementi skupa b su: ";
    ispisi(b);

    cout << "broj elemenata skupa b je: "<< b.size() << endl; //metod size vraca broj elemenata skupa

    cout << "-9 pripada skupu b: " << b.count(-9)<< endl; //metod count vraca 1 ako argument pripada skupu, a 0 u suprotnom
    cout << "100 pripada skupu b: " << b.count(100)<< endl;

    b.insert(5); // metoda insert ubacuje argument u skup
    cout << "elementi skupa b su: ";
    ispisi(b);
    
    b.insert(7); // ako ubacimo u skup nesto sto je vec u skupu, nista se nece dogoditi
    cout << "elementi skupa b su: ";
    ispisi(b);

    b.erase(7); // metoda erase izbacuje argument iz skupa
    cout << "elementi skupa b su: ";
    ispisi(b);

    b.erase(-100); //ako "iz skupa izbacimo nesto sto nije u skupu", nista se nece dogoditi
    cout << "elementi skupa b su: ";
    ispisi(b); 

    b.clear();
    cout << "elementi skupa b su: ";
    ispisi(b);

    set<int> c;//ako ne inicijalizujemo skup, on je prazan
    cout << "elementi skupa c su: ";
    ispisi(c);
}