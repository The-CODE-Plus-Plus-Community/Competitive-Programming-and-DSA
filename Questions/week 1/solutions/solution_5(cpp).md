#include <bits/stdc++.h>
using namespace std;

int main(){

#### array size taken as input and stored in n

long long int m;cin>>m;

#### array of size n is declared dynamically

int \* arr = new int[m];

#### for loop to take in array elements  

for(long long int i=0;i<m;i++){
cin>>arr[i];
}

#### nested for loop to bubble sort the elements

for(long long int i=0;i<m;i++){
for(long long int j=i+1;j<m;j++){
if(arr[i]>arr[j]){
int temp = arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}

#### for loop to output array elements

    for(long long int i=0;i<m;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
