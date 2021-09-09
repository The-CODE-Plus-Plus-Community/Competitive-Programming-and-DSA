#include<bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif


    int x, y, z;
    cin >> x >> y >> z;
    int a[x], b[y], c[z];
    set<int> s1, s2, s3;
    for(int i=0; i<x; i++){
        cin >> a[i];
        s1.insert(a[i]);
    }
    for(int i=0; i<y; i++){
        cin >> b[i];
        s2.insert(b[i]);
    }
    for(int i=0; i<z; i++){
        cin >> c[i];
        s3.insert(c[i]);
    }
    map<int, int> m;
    
    for(auto x: s1) m[x]++;
    for(auto x: s2) m[x]++;
    for(auto x: s3) m[x]++;

    for(auto it:m){
        if(it.second==3) cout << it.first << " ";
    }


    return 0;
}