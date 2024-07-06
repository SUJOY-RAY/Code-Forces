#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;++i){
        string word;
        getline(cin,word);

        if(word.length()>10){
            string abbreviated=word.front()+to_string(word.length()-2)+word.back();
            cout<<abbreviated<<endl;
        }else{
            cout<<word<<endl;
        }
    }
    return 0;
}