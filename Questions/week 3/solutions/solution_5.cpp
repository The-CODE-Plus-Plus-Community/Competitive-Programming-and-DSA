#include <bits/stdc++.h>
using namespace std;

// maximun sum in a subarray in o(n) uses Kadane's Algo
// Kadane's Algo uses maxSum and curSum to effectively calculate max sum in subarray in o(n) time complexity

int maxSumSubArray(int *arr, int size){
	
	// below is the code for Kadane's Algo
	
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

// calculated using Kadane's Algo

cout<< maxSumSubArray(arr,n);

cout<<endl;
return 0;
}
