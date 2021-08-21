#include <bits/stdc++.h>
using namespace std;

int main(){

##### array size taken as input and stored in m

long long int m;cin>>m;

##### array of size n is declared dynamically

int \*arr = new int[m];

##### declared a map to store frequency of numbers

map<int,int> hash;

##### for loop to take in array elements 

for(long long int i=0;i<m;i++){
cin>>arr[i];

##### inserting and incrementing array elements into hash map

hash[arr[i]]++;
}

##### input n i.e element whose frequency is to be found

long long int n;cin>>n;

##### output the frequency of n

cout<<hash[n]<<endl;
return 0;
}
