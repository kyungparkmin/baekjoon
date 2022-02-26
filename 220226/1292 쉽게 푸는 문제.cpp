#include <iostream>
int main(){
	int a, b, sum=0;
	scanf("%d %d", &a, &b);
	for(int i = a+1; i <= b-1; i++){
		sum += i;
	}
	printf("%d", sum);
}
