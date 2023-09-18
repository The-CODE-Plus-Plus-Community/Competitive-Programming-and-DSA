#include <bits/stdc++.h>
using namespace std;

void pushNegative(int *a, int n){
	int j =0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			swap(a[i],a[j]);
			j++;
		}
	}
}


int main(){
   int n;
cin>>n;

int * arr = new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}

pushNegative(arr,n);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

return 0;
}

