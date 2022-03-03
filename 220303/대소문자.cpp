#include <stdio.h>
#include <string.h>
int main(){
	char str1[1000];
	scanf("%s", str1);
	for(int i = 0; str1[i]!='\0'; i++){
		if(str1[i] >= 'A' && str1[i] <= 'Z'){
			str1[i]+=32;
		}else{
			str1[i]-=32;
		}
	}
	printf("%s", str1);
}
