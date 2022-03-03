#include <iostream>
using namespace std;
int main(){
	int num,num1, a[10000], cnt=0;
	cin>>num;
	for(int i = 1; i<=num; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &num1);
	for(int i = 1; i <= num; i++){
		if(a[i]==num1){
			cnt++;
		}
	}
	printf("%d", cnt);
}
