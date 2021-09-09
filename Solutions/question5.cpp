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


    // Kadane's Algorithm (Maximum Sum Sub-array)

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int c=0, mx=0;
    for(int i=0; i<n; i++){
        c+=arr[i];
        mx=max(mx, c);
        if(c<0) c=0;
    }
    cout << mx << endl;


    return 0;
}