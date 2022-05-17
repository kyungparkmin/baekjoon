#include <iostream>
#include <string>
using namespace std;
int main(){
  int num, cnt = 0;
  cin>>num;

  string str;

  for(int i = 0; i < num; i++){
    cin>>str;
    if(str == "anj"){
      cnt = 1;
    }
  }

  if(cnt == 1){
    cout<<"뭐야;";
  }else{
    cout<<"뭐야?";
  }
}