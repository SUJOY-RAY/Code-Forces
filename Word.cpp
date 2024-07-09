#include <iostream>
#include <regex>
#include <string>
#include <algorithm>

using namespace std;


int main(){
	string data;
	cin>>data;
	
	int lowerCount=0;
	int upperCount=0;
	
	regex lower("[a-z]");
	regex upper("[A-Z]");
	
	for(char a:data){
		if(regex_match(string(1,a),lower)){
			lowerCount++;
		}else if (regex_match(string(1,a),upper)){
			upperCount++;
		}
	}
	if(lowerCount>upperCount){
		transform(data.begin(),data.end(),data.begin(),::tolower);	
		cout<<data;
	}else if (upperCount>lowerCount){
		transform(data.begin(),data.end(),data.begin(),::toupper);
		cout<<data;
	}else if (upperCount==lowerCount){
		transform(data.begin(),data.end(),data.begin(),::tolower);	
		cout<<data;	
	}
	

	return 0;
}
