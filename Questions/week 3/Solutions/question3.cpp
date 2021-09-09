#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif


    int n, ans;
    cin >> n;
    map<int, int> m;
    int arr[n+1];
    for(int i=0; i<n+1; i++){
        cin >> arr[i];
        m[arr[i]]++;
        if(m[arr[i]]==2) ans=arr[i];
    }
    cout << ans << endl;

    return 0;
}
