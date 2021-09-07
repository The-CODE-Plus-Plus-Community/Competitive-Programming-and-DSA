#include<bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int s, n, ans=0;
    cin >> s >> n;
    int arr[s];
    for(int i=0; i<s; i++){
        cin >> arr[i];
        if(arr[i]==n) ans++;
    }
    cout << ans << endl;

    return 0;
}