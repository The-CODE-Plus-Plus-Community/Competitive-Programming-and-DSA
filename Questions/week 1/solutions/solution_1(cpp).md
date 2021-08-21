#include <bits/stdc++.h>
using namespace std;

int main(){
####  array size taken as input and stored in n
long long int n;cin>>n;

####  array of size n is declared dynamically
int \*arr = new int[n];

####  for loop to take in array elements
for(long long int i=0;i<n;i++){
cin>>arr[i];
}

#### for loop to print out array elements
for(long long int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

cout<<endl;

return 0;
}
