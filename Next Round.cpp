#include <iostream>
using namespace std;

int main(){
	int n,k;
	//cout<<"Enter the no of contestants and then the positon "<<endl;
	cin>>n>>k;
	int arr[n];
	int count=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		if(arr[i]>=arr[k] && arr[i]>0){
			count++;
		}	
	}
	cout<<count;
<<<<<<< HEAD
	
=======
>>>>>>> 6866e4554cda63a92d0ed69736770486d487bf15
	return 0;
}
