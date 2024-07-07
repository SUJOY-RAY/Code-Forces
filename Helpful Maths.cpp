#include<iostream>
#include<vector>
#include<sstream>
#include <algorithm>


using namespace std;

int main(){
	string data;
	cin>> data;
	
	vector<int> elements;
	for(int a: data){
		if (isdigit(a)){
		elements.push_back(a-'0');
		}
	}	
	
	sort(elements.begin(),elements.end());
	
	
    for (int i=0;i<elements.size();++i) {
        cout << elements[i];
        if(i<elements.size()-1){
        	cout<<"+";
        }
    }
	return 0;
}
