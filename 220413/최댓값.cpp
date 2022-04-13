#include <iostream>
using namespace std;
int main(){
	int y=0, x=0, result = 0;
	int arr;
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			cin>>arr;
			
			if(arr > result){
				y = i;
				x = j;
				result = arr;
			}
		}
	}
	printf("%d\n%d %d", result, y, x);
}
