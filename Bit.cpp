#include <iostream>
using namespace std;

int main(){
	int n;
	//cout<<"Enter the numebr of operations"<<endl;
	cin>>n;
	int X=0;
	for(int i=0;i<n;i++){
		string action;
		//cout<<"Enter the operation"<<endl;
		cin>>action;
		if(action=="++X"){
			++X;
		}
		else if (action=="--X"){
			--X;
		}
		else if (action=="X--"){
			X--;	
		}
		else if (action=="X++"){
			X++;
		}

		
	}
	//cout<<"output"<<endl;
	cout<<X<<endl;
	return 0;
	
}
