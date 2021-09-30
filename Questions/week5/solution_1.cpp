#include <iostream>
using namespace std;

int main(){
      cout<<"Enter a string to be reversed: ";
      string str; cin>>str;

      int n = str.length();
      for(int i=0; i<n/2; i++) swap(str[i], str[n-i-1]);

      cout<<str<<endl;
      return 0;
}