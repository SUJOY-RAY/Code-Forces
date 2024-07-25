#include<iostream>
using namespace std;

int main(){
	int amount;
	cin>>amount;
	int noteCounter=0;
	
	int notes[]={100,20,10,5,1};
	for(int note:notes){
		if(amount>=note){
			int temp=amount;
			noteCounter+=temp/note;
			amount%=note;
		}
	}
	
	cout<<noteCounter<<endl;
	
	return 0;
}
