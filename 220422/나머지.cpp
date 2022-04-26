#include <iostream>
using namespace std;
int main(){
	int cnt=0, num;
	for(int i = 1; i <= 10; i++){
		cin>>num;
		num%=42;
		cout<<(float)num<<endl;
	}
}
