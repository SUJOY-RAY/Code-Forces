#include<iostream>
#include<map>
using namespace std;

int main(){
	map<string,int> polyhedrons={
		{"Tetrahedron",4},
		{"Cube",6},
		{"Octahedron",8},
		{"Dodecahedron",12},
		{"Icosahedron",20}
	};
	
	
	int n;
	cin>>n;
	string collection[n];
	for(int i=0;i<n;i++){
		cin>>collection[i];
	}
	
	int sides=0;
	
	for(string a:collection){
		sides+=polyhedrons[a];
	}
	
	cout<<sides;
	return 0;
}
