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


    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    for(int i=0; i<n; i++){
        if(a[i]>b[0]){
            swap(a[i], b[0]);
        }
        sort(b, b+n);
    }
    
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
    for(int i=0; i<n; i++) cout << b[i] << " ";
    

    return 0;
}