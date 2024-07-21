#include<iostream>
#include<string>
#include<set>
#include <algorithm>

using namespace std;

int main(){
	int n;
	string pan;
	cin>>n>>pan;
	set<char> data;
	
	for(char a:pan){
		data.insert(tolower(a));
	}
	if(data.size()==26){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
	return 0;
}
