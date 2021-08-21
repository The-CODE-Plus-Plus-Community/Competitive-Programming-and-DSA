#include <bits/stdc++.h>
using namespace std;

int main(){

#### array size taken as input and stored in m

long long int m;cin>>m;

#### array of size n is declared dynamically

    int * arr = new int[m];

#### initialised min element with INT_MAX and max with INT_MIN

    int min = INT_MAX,max = INT_MIN;

#### for loop to take in array elements  

    for(long long int i=0;i<m;i++){
    cin>>arr[i];
    }

#### for loop to swap i with (m-1-i)th element

    for(long long int i=0,j=m-1;i<=j;i++,j--){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }

#### for loop to output array elements

    for(long long int i=0;i<m;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
