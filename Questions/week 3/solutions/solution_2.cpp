#include <bits/stdc++.h>
using namespace std;

int maxSumSubArray(int *arr, int size){
	int maxSum = INT_MIN;
	int curSum = 0;
	for(int i=0;i<size;i++){
		curSum+=arr[i];
		if(curSum>maxSum){
			maxSum=curSum;
		}
		if(curSum<0){
			curSum=0;
		}
	}
	return maxSum;
}


int main(){
int n;
cin>>n;

int * arr = new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
cout<< maxSumSubArray(arr,n);

cout<<endl;
return 0;
}

