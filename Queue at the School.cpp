#include <iostream>
#include <string>

using namespace std;

void simulator(int n, int t,string s){
	for(int time=0;time<t;++time){
		int i=0;
		
		while(i<s.length()-1){
			if(s[i]=='B' && s[i+1]=='G'){
				swap(s[i],s[i+1]);
				i++;
			}
			i++;
		}
	}
	cout<<s<<endl;
}

int main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    simulator(n,t, s);
    return 0;
}

