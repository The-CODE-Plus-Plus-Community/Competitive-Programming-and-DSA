#include <bits/stdc++.h>
using namespace std;

int main(){

#### array size taken as input and stored in n

long long int n;cin>>n;

#### array of size n is declared dynamically

int \*arr = new int[n];

#### for loop to take in array elements 

for(long long int i=0;i<n;i++){
cin>>arr[i];
}

#### inbuilt sort function to sort the array

sort(arr,arr+n);

#### take k as input

long long int k;cin>>k;

#### output kth largest and smallest since indexing starts from 0 so cout k-1th and n-1-kth elements

cout<<arr[k-1]<<" "<<arr[n-1-k]<<endl;
return 0;
}
