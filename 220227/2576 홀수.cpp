#include <iostream>
using namespace std;
int main(){
	int sum=0, min=100, a;
	
	for(int i = 1; i <= 7; i++){
		cin>>a;
		if(a%2==1){
			sum+=a;
			if(a<min){
				min=a;
			}
		}
	}
	if(sum==0){
		cout<<"-1";
	}else{
		cout<<sum<<endl;
		cout<<min<<endl;
	}
	
}
