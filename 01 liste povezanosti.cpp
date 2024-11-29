#include<bits/stdc++.h>

using namespace std;
typedef unsigned uns;
int main(){
    uns n;
    cin >> n;
    vector<vector<uns>> graf(n);
    uns m;
    cin >> m;
    for(uns i=1; i<=m; i++){
        uns A, B;
        cin >> A >> B;
        graf[A].push_back(B);
        graf[B].push_back(A);
    }

    for(uns i=0; i<n; i++){
        sort(graf[i].begin(), graf[i].end());
        for (auto x: graf[i]) cout << x << ' ';
        cout << endl;
    }
}
