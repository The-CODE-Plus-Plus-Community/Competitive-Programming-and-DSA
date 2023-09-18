#include <bits/stdc++.h>
using namespace std;

void rotateArray(int *arr, int size){
	int x = arr[size-1];
	for(int i=size-2;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=x;
}


int main(){
int n;
cin>>n;
int * arr = new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
rotateArray(arr,n);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}

