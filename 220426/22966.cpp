#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int n, num[100], min=100;
	char str[1000], str1[1000];
	
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>str;
		cin>>num[i];
		
		if(num[i]<min){
			strcpy(str1, str);
			min = num[i];
		}
	}
	
	
	printf("%s\n", str1);
}
