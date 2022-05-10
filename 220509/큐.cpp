#include <iostream>
#include <queue>
#include <string>
using namespace std;
queue<int> q;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin>>num;
	for(int i = 1; i <= num; i++){
		string str;
		cin>>str;
		if(str=="push"){
			int x;
			cin>>x;
			q.push(x);
		}else if(str=="pop"){
			if(!q.empty()){
				cout<<q.front()<<endl;
				q.pop(); 
			}else{
				cout<<"-1"<<endl;
			}
		}else if(str=="size"){
			cout<<q.size()<<endl;
		}else if(str=="empty"){
			if(q.empty()){
				cout<<"1"<<endl;
			}else{
				cout<<"0"<<endl;
			}
		}else if(str=="front"){
			if(!q.empty()){
				cout<<q.front()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}else if(str=="back"){
			if(!q.empty()){
				cout<<q.back()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
	}
}
