#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, a[n];
    int j=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<0)
        {
        if (i != j)
        {
                swap(a[i], a[j]);
            j++;
        }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
