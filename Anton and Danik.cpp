#include <iostream>
#include <regex>
#include <string>
#include <algorithm>

using namespace std;


int main(){
	int n;
	string games;
	cin>>n>>games;
	int Anton=0,Danik=0;
	for(int i=0;i<n;i++){
		if(games[i]=='A'){
			Anton++;
		}
		else{
			Danik++;
		}
	}	
	if (Anton>Danik){
			cout<<"Anton";
		}
	else if(Danik>Anton){
			cout<<"Danik";
		}
	else{
		cout<<"Friendship";
	}
	return 0;
}
