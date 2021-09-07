#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int k){
    while(l<=r){
        int x = l+(r-l)/2;
        if(arr[x]==k){
            return x;
        }
        if(arr[x]>k) r=x-1;
        if(arr[x]<k) l=x+1;
    }
    return -1;
}

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int x=binarySearch(arr, 0, n-1, k);
    if(x==-1) cout << "Not Found" << endl;
    else{
        cout << "Found at " << x << endl; 
    }


    return 0;
}