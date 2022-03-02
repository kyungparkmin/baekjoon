#include <iostream>
using namespace std;
int main(){
	int num, num1, arr[100], sum=0;
	cin>>num;
	for(int i = 0; i < num; i++){
		cin>>num1;
		sum = 0;
		for(int j = 0; j < num1; j++){
			int a;
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
	}
}
