#include <iostream>
#include <string>
using namespace std;
int main(){
	char str;
	int sum = 0, num;
	cin>>num;
	for(int i = 1; i <= num; i++){
		cin>>str;
		sum += str-48;
	}
	
	printf("%d", sum);
}
