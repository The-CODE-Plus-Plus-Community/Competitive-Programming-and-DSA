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
    int l=0, m=0, h=n-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l], arr[m]);
            l++;
            m++;
            continue;
        }
        if(arr[m]==1){
            m++;
            continue;
        }
        if(arr[m]==2){
            swap(arr[m], arr[h]);
            h--;
        }
    }
    for(int i=0; i<n; i++) cout << arr[i] << " ";



    return 0;
}