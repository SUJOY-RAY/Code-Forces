#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr1[n],arr2[n];
	
	for(int i=0;i<n;i++){
		cin>>arr1[i]>>arr2[i];
	}
	for(int i=0;i<n;i++){
		int remainder=arr1[i]%arr2[i];
		int counter=(remainder==0)?0:arr2[i]-remainder;
		cout<<counter<<endl;
		
	}
	return 0;
}
