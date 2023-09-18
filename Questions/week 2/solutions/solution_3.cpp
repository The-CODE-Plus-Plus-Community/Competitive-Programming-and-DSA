#include <bits/stdc++.h>
using namespace std;

void insertionSort(int * a, int n){
	for(int i=1;i<n;i++){
		int j;
		int k = a[i];
		for(j=i-1;j>=0 && a[j]>k ;j--){
			a[j+1]=a[j];
		}
		a[j+1]=k;
	}
}



int main(){
int n;
cin>>n;

int * arr = new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}

insertionSort(arr,n);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

return 0;
}
