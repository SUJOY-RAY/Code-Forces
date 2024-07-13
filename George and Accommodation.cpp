#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

int n;
cin>>n;
int counter=0;
for(int i=0;i<n;i++){
	int a,b;
	cin>>a>>b;
	if((b-a)>2){
		counter++;
	}	
}
cout<<counter;

return 0;
}
