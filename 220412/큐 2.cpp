#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;
queue<int> q;
int x, a;
string input; 
int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	cin>>a;
	for(int i = 1; i <= a; i++){

		cin>>input;
		
		if(input == "push"){
			cin >> x;
			q.push(x);
		}else if(input == "pop"){
			if(!q.empty()){
				cout<<q.front()<<endl;
				q.pop();
			}else{
				cout<<"-1"<<endl;
			}
		}else if(input == "size"){
			cout<<q.size()<<endl;
		}else if(input == "empty"){
			cout<<q.empty()<<endl;
		}else if(input == "front"){
			if(!q.empty()){
				cout<<q.front()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}else if(input == "back"){
			if(!q.empty()){
				cout<<q.back()<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
	}
}
