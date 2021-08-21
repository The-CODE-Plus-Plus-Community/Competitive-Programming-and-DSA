

#include <bits/stdc++.h>
using namespace std;

int main(){

#### array size taken as input and stored in m

    long long int m;cin>>m;

#### array of size n is declared dynamically

    int * arr = new int[m];

    int min = INT_MAX,max = INT_MIN;

#### for loop to take in array elements

    for(long long int i=0;i<m;i++){
    cin>>arr[i];

#### comparing and updating max

    if(arr[i]>max){
    max=arr[i];
    }

#### comparing and updating min

    if(arr[i]<min){
    min=arr[i];
    }

}

cout<<max<<endl;
cout<<min<<endl;

return 0;
}
