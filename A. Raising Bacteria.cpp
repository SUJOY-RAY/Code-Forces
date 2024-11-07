#include <iostream>
using namespace std;

void bacteriaCounter(int n){
    int counter=0;
    while(n>0){
        counter+=n&1;
        n>>=1;
        
    }
    cout<<counter;    
}

int main(){
    int n;
    cin>>n;
    bacteriaCounter(n);

    return 0;
}