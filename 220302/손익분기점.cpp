#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin>>a>>b>>c;
	
	int sum = 0;
	sum = a/(c-b)+1;
	
	if(b>=c){
		cout<<"-1";
		sum == -2;
	}else if(sum != -2){
		cout<<sum;
	}
}
