#include <iostream>
using namespace std;
int main(){
	int a, b, sum=0;
	char type;
	
	cin>>a;
	
	sum = a;
	
	
	
	while(true){
		cin>>type;
		if(type == '='){
			cout<<sum<<endl;
			break;
		}
		cin>>b;
		if(type == '+'){
			sum+=b;	
		}else if(type == '-'){
			sum-=b;
		}else if(type == '*'){
			sum*=b;
		}else if(type == '/'){
			sum/=b;
		}
	}
		
}
