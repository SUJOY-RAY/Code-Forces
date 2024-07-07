#include <iostream>
using namespace std;


int main() {
	int n;
	//cout<<"Enter no of questions"<<endl;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++){
		int petya,vasya,tonya;
		//cout<<"Enter data"<<endl;
		cin>>petya>>vasya>>tonya;
		if((petya+vasya+tonya)>=2){
			count++;
		}
	}
	//cout<<"Total Questions Solved by them: "<<endl;		
	cout<<count<<endl;
	    	


	return 0;
}
