#include <iostream>
#include <algorithm>

using namespace std;

void presents(int n, int arr[]){
    for (int i = 1; i <= n; i++){
        auto ptr=find(arr,arr+n,i);
        if (ptr!=arr+n){
            int idx=ptr-arr+1;
            cout<<idx<<" ";        
        }
    }
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    presents(n,arr);

    return 0;
}
