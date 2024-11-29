#include<bits/stdc++.h>

using namespace std;
typedef unsigned uns;

bool dfsR(uns start, vector<vector<uns>>& graf, vector<bool>& flags, uns target){
    if (start == target) return true;
    flags[start]=true;
    for (auto x : graf[start])
        if (flags[x]==false)
            if (dfsR(x, graf, flags, target)==true) return true;

    return false;
}

int main(){
    uns n;
    cin >> n;
    vector<vector<uns>> graf(n);

    uns m;
    cin >> m;
    for(uns i=1; i<=m; i++){
        uns levi, desni;
        cin >> levi >> desni;
        levi--;
        desni--;
        graf[levi].push_back(desni);
    }

    uns q;
    cin >> q;
    for(uns i=1; i<=q; i++){
        uns levi, desni;
        cin >> levi >> desni;
        levi--;
        desni--;

        vector<bool> flags(n,false);

        if( dfsR(levi,graf,flags,desni) ) cout << "da\n";
        else cout << "ne\n";
    }
}
