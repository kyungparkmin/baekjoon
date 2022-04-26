#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a;
	cin>>n;
	char str = '=';
	
	for(int i = 1; i <= n; i++){
		cin>>a;
		for(int j = 1; j <= a; j++){
			printf("=");
		}
		printf("\n");
	}
}
