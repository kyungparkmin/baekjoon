#include <iostream>
#include <string>
using namespace std;
int main(){
	int cnt = 0;
	while(true){
		string str;
		getline(cin, str);
		if(str == "#"){
			break;
		}
		for(int i = 0; i < str.length(); i++){
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
				cnt++;
			}
		}
		cout<<cnt<<endl;
		cnt = 0; 
	}
}
