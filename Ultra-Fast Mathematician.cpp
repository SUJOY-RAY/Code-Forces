#include <iostream>
using namespace std;

int main(){
	string s1,s2;
	string result;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		if(s1[i]==s2[i]){
			result+='0';
		}else{
			result+='1';
		}
	}
	cout<<result;
	
	return 0;
}
