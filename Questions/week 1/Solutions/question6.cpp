#include<bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int smallest = arr[k-1];
    sort(arr, arr+n, greater<int>());
    int largest = arr[k-1];
    cout << smallest << " " << largest << endl;


    return 0;
}