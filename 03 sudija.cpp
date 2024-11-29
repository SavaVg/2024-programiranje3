#include<bits/stdc++.h>

using namespace std;
typedef unsigned uns;

int main(){
    uns n;
    cin >> n;
    vector<uns> ustepen(n); //default vrednost brojevnog tipa u vektoru je 0
    vector<uns> istepen(n);

    uns m;
    cin >> m;
    for(uns i=1; i<=m; i++){
        uns A, B;
        cin >> A >> B;
        A--;
        B--;
        istepen[A]++;
        ustepen[B]++;
    }

    for(uns i=0; i<n; i++){
        if (istepen[i]==0 && ustepen[i]==n-1) {
            cout << i+1<< endl;
            return 0;
        }
    }

    cout << "-1\n";
}
