#include <iostream>
using namespace std;
int main(){
	int a, b, c, sum=0, max=0, n=0;
	cin>>a>>b>>c; 
	if(a==b && a==c && b==c){
		sum = 10000+(a * 1000);
	}else if(a!=b && a!=c && b!=c){
		if(a>=b && a>=c){
			max = a;
		}else if(b>=a && b>=c){
			max = b;
		}else if(c>=a&&c>=b){
			max = c;
		}
		sum = max*100;
	}else{
		if(a==b || a==c){
			n = a;
		}else if(b==a || b==c){
			n = b;
		}else if(c==a || c==b){
			n = c;
		}
		sum = 1000+(n*100);
	}
	printf("%d", sum);
}
