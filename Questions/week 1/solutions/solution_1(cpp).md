<!-- Create an array of size n of integers. -->
<!-- Take input from the user for these n elements and print the array after that. -->

#include <bits/stdc++.h>
using namespace std;

int main(){
long long int n;cin>>n;

<!-- array size taken as input and stored in n -->

int \*arr = new int[n];

<!-- array of size n is declared dynamically -->

for(long long int i=0;i<n;i++){

<!-- for loop to take in array elements  -->

cin>>arr[i];
}
for(long long int i=0;i<n;i++){

<!-- for loop to print out array elements -->

cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
