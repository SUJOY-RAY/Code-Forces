#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
    vector<int> arr(n);

	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	
	for(int a:arr){
		if(a<10){
			cout<<1<<"\n"<<a<<endl;
			continue;
		}		
		
		vector<int> round; 
		int place=1;
		int temp=a;
		
		while(temp>0){
			int digit=temp%10;
			if (digit!=0){
				round.push_back(digit*place);
			}
			temp/=10;
			place*=10;
		}
		cout<<round.size()<<endl;
		for(int num:round){
			cout<<num<<" ";		
		}
		cout<<endl;
	}
	
	
	return 0;
}
