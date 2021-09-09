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


    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    ll jumps[n];
    for(int i=1; i<n; i++) jumps[i]=1e9+7;
    jumps[0]=0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(i <= (j+arr[j]))
                jumps[i]=min(jumps[i], jumps[j]+1);
        }
    }
    cout << jumps[n-1] << endl;


    return 0;
}