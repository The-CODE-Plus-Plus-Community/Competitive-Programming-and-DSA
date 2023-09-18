#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b,c;cin>>a>>b>>c;
set<int> s1, s2, s3;
    for(int i=0;i<a;i++){
    	int x;cin>>x;
    	s1.insert(x);
	}
	for(int i=0;i<b;i++){
    	int x;cin>>x;
    	s2.insert(x);
	}
	for(int i=0;i<c;i++){
    	int x;cin>>x;
    	s3.insert(x);
	}
	
map<int,int> hash;
for(auto x:s1)hash[x]++;
for(auto x:s2)hash[x]++;
for(auto x:s3)hash[x]++;

for(auto x:hash){
	if(x.second==3){
		cout<<x.first<<" ";
	}
}
cout<<endl;
return 0;
}

