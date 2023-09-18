#include <bits/stdc++.h>
using namespace std;

int partition(int *arr , int s, int e){
	int x= arr[s];
    int count=0;
    
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=x){
            count++;
        }
    }
    
    int d= arr[s+count];
    arr[s+count]=x;
    arr[s]=d;
    
    
    int a=s;
    int b=e;
    
    while(a<=b){
        if(arr[a]<=x){
            a++;
        }
        else if(arr[b]>x){
            b--;
        }
        else{
            int h= arr[b];
            arr[b]=arr[a];
            arr[a]=h;
            a++,b--;
        }
    }
    
    return s+count;
}

void quickSort(int * a, int si, int ei){
     if(si>=ei){
     	return;
	 }
	 
	 int part = partition(a,si,ei);
	 quickSort(a,si,part-1);
     quickSort(a,part+1,ei);
	 
}



int main(){
int n;
cin>>n;

int * arr = new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int start = 0;
int end = n-1;
quickSort(arr,start,end);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

return 0;
}


