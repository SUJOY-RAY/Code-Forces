#include<iostream>
#include<set>
using namespace std;

int main(){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	set<int> hurtDragon;
	for(int i=1;i<=d;i++){
		if(i%k==0||i%l==0||i%m==0||i%n==0){
			hurtDragon.insert(i);
		}
	}
	cout<<hurtDragon.size();
	return 0;
}
