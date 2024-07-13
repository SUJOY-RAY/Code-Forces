#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	int n;
	cin>>n;
	unordered_map<int, int> map;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		map[x]++;
	}
	if (map[1]>0){
		cout<<"HARD";
	}
	else{
		cout<<"EASY";
	}
	
	
	
	return 0;
}
