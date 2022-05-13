#include <iostream>
using namespace std;
int main(){
	long long num, sum=5;
	cin>>num;
	if(num==1){
		sum+=5;
	}else{
		for(int i = 2; i <= num; i++){
			sum += 3*i+1;
		}
		cout<<sum%45678<<endl;
	}
}
