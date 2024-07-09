#include <iostream>
#include <regex>
#include <string>
#include <algorithm>

using namespace std;


int main(){
	string num;
	cin>>num;
	int count=0;
	
	for(char digit:num){
		if(digit=='4'||digit=='7'){
			count++;
		}
	}
	
	if (count==4||count==7){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
