#include<bits/stdc++.h>

using namespace std;
typedef unsigned uns;

int main(){
    ios_base::sync_with_stdio(false);
    uns n;
    cin >> n;
    bool graf[n][n];
    for(uns i=0; i<n; i++)
        for(uns j=0; j<n; j++) graf[i][j]=false;

    uns m;
    cin >> m;
    for(uns i=1; i<=m; i++){
        uns A, B;
        cin >> A >> B;
        A--;
        B--;
        graf[A][B]=true;
    }

    uns rez=0;
    uns q;
    cin >> q;
    for(uns i=1; i<=q; i++){
        uns A, B;
        cin >> A >> B;
        A--;
        B--;
        if (graf[A][B]) rez++;
    }
    cout << rez <<endl;
}
