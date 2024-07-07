#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>


using namespace std;

int main(){
	string data1,data2;
	cin>>data1>>data2;
	
	transform(data1.begin(), data1.end(),data1.begin(),::tolower);
	transform(data2.begin(), data2.end(),data2.begin(),::tolower);
	
	int n=data1.length();
	
	int sum1=0,sum2=0;
	
	for(int i=0;i<n;i++){
		
		sum1+=data1[i];
		sum2+=data2[i];
	}
	
	if (sum1<sum2){cout<<"-1"<<endl;}
	else if (sum1==sum2){cout<< "0"<<endl;}
	else if (sum1>sum2){cout<<"1"<<endl;}
	
	return 0;
}
