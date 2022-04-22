#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char str[1000];
	int n, arr[10000], num=0, cnt=0;
	cin>>n;
	for(int i = 0; i < n; i++){
		num=0;
		cnt=0;
		scanf("%s", str);
		for(int j = 0; j < strlen(str); j++){
			if(str[j] == 'O'){
				cnt++;
				num+=cnt;
			}else if(str[j] == 'X'){
				cnt = 0;
			}
		}
		printf("%d\n", num);
	}
	
}
