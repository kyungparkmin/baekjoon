#include <iostream>
using namespace std;
int main(){
	long long num, sum=0;
	cin>>num;
	for(int i = 0; ; i++){
		sum += i;
		if(sum>num){
			printf("%d", i-1);
			break;
		}
	}
}
