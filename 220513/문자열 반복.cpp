#include <iostream>
#include <string>
using namespace std;
int main(){
	int num, sNum;
	string str;
	cin>>num; 
	for(int i = 0; i < num; i++){
		cin>>sNum;
		cin>>str;
		for(int j = 0; j < str.length(); j++){
			for(int k = 0; k < sNum; k++){
				cout<<str[j];
			}
			
		}
		cout<<endl;
	}
}
