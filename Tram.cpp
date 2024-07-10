#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;

int main(){
	int n;
	int a,b;
	int current=0;
	int max_capacity=0;
	
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		cin>>a>>b;
		current-=a;
		current+=b;
		
		if (current>max_capacity){
			max_capacity=current;
		}		
	}
	cout<<max_capacity;
	
	return 0;
}
