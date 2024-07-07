/*
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
input
ApPLe
output
ApPLe



*/


#include<iostream>
#include<sstream>
#include <cctype>
using namespace std;

int main(){
	string data; 
	cin>>data;
	ostringstream ss;
	for (int i=0;i<data.size();i++){
		if (i==0){
			ss<<static_cast<char>(toupper(data[i]));	
			continue;
		}
		ss<<data[i];
		
	}
	cout<<ss.str();


	return 0;
}
