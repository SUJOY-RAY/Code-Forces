#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int counter=1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if (i>0){
			if(arr[i]/10==arr[i-1]%10){
				counter++;
			}
		}	
	}
	cout<<counter;
	
	return 0;
}
