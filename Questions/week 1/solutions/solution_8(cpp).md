#include <bits/stdc++.h>
using namespace std;

int main(){

#### array size taken as input and stored in m

long long int m;cin>>m;

#### array of size n is declared dynamically

int \*arr = new int[m];

#### declare var to store count of 0,1,2

int zero=0,one=0,two=0;

#### for loop to take in array elements 

for(long long int i=0;i<m;i++){
cin>>arr[i];

#### increment variable acc to input 

if(arr[i]==0)
zero++;
if(arr[i]==1)
one++;
if(arr[i]==2)
two++;
}

#### fill the array using loops

long long int j=-1;
for(long long int i=1;i<=zero;i++){
j++;
arr[j]=0;
}
for(long long int i=1;i<=one;i++){
j++;
arr[j]=1;
}
for(long long int i=1;i<=two;i++){
j++;
arr[j]=2;
}

#### output the array elements in sorted order

for(long long int i=0;i<m;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
