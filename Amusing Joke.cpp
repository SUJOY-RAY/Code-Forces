#include<iostream>
#include<map>
using namespace std;

bool canOrNot(const string &guest,const string &host,const string &pile){
	map<char,int> mergeMap,pileMap;
	for(char a: guest+host){
		mergeMap[a]++;
	}
	for(char a: pile){
		pileMap[a]++;
	}
	return mergeMap==pileMap;
}

int main(){
	string guest, host, pile;
	cin>>guest>>host>>pile;
	if (canOrNot(guest,host,pile)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO";
	}
}
