#include <iostream>
#include <regex>
#include <string>
#include <algorithm>

using namespace std;


int main(){
	int num,n;
	cin>>num>>n;
	
	while(n--){
		if(num%10==0){
			num/=10;
		}
		else if(num%10!=0){
			num-=1;
		}
	}
	cout<<num;

	return 0;
}
