#include<bits/stdc++.h>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int l=0, r=n-1;
    while(l<r){
        int temp = arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        r--, l++;
    }
    for(int i=0; i<n; i++) cout << arr[i] << " ";


    return 0;
}