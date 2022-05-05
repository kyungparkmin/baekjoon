#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i = 0; i < a; ++i){
		stack<char> st;
		string s;
		cin>>s;
		for(int j = 0; j < s.length(); ++j){
			if(st.empty() || s[j] == '('){
				st.push(s[j]);
			}else if(st.top() == '('){
				st.pop();
			}
		}
		if(st.empty()){
			cout<<"YES"<<endl;
			
		}else{
			cout<<"no"<<endl;
		}
	}
}
