#include <bits/stdc++.h>
using namespace std;

bool isPresent(int \*arr , int size, int x){

#### base case if size==0 return false as element has not been found

    if(size==0){
    return false;
    }

#### small calculation to check if arr[0] or arr[size-1] == x

    if(arr[0]==x || arr[size-1]==x){
    return true;
    }

#### recursive call on arr+1,size-1

    return isPresent(arr+1,size-1,x);

}

int main(){

#### array size taken as input and stored in m

long long int m;cin>>m;

#### array of size n is declared dynamically

int *arr = new int[m];

#### for loop to take in array elements

for(long long int i=0;i<m;i++){
cin>>arr[i];
}

#### element to be searched is taken as input

long long int x;cin>>x;

#### isPresent is a fucntion which takes array,size,element to be searched as arguements

bool ans = isPresent(arr,m,x);

#### output true if x is present

if(ans==1){
cout<<"True"<<endl;
}

#### output false if x is not present

else{
cout<<"False"<<endl;
}
return 0;
}
