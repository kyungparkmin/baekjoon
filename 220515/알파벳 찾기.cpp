#include <iostream>
#include <string>
using namespace std;
int main(){
	string a = "abcdefghijklmnopqrstuvwxyz";
	string str; 
	cin>>str;
	for(int i = 1; i < a.length(); i++){
		cout<<(int)str.find(a[i])<<" ";
	}
}
