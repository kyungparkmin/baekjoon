#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int a, n, arr[1000000], max=-1000000, min=1000000;
	cin>>a;
	for(long long int i = 1; i <= a; i++){
		cin>>n;
		for(long long int j = 1; j <= n; j++){
			cin>>arr[j];
		}
		for(int j = 1; j <= n; j++){
			if(arr[j] > max) max = arr[j];
			if(arr[j] < min) min = arr[j];
		}
		printf("%d %d\n", min, max);
		max = -1000000;
		min = 1000000;
		
	}
}
