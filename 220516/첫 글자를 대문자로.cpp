#include <iostream>
#include <string>
using namespace std; 
int main(){
	int num;
	cin>>num;
	for(int i = 0; i < num+1; i++){
		string str;
		getline(cin, str);
		for(int j = 0; j < str.length(); j++){
			if(str[0] >= 97 && str[0] <= 122){
				str[0] -= 32;
			}
			cout<<str<<endl;
			break;
		}
	}
}
