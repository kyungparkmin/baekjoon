#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int num, arr[10000];
	cin>>num;
	for(int i = 1; i <= num; i++){
		cin>>arr[i];

	}
	for(int i = 1; i <= num; i++){
				sort(arr, arr+10);
		printf("%d\n", arr[i]);
	}
	
}
