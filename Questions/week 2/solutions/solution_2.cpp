#include <bits/stdc++.h>
using namespace std;

void selectionSort(int * a, int n){
	for(int i=0;i<n-1;i++){
		int mini=i;
		for(int j=i+1;j<n;j++){
			if(a[mini]>a[j]){
				mini=j;
			}
		}
		int temp=a[i];
		a[i]=a[mini];
		a[mini]=temp;
		
	}
}



int main(){
int n;
cin>>n;

int * arr = new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}

selectionSort(arr,n);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

return 0;
}

