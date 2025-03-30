#include <iostream>
using namespace std;

string numToExcel(int col){
    string column = "";
    while (col>0)
    {
        col--;
        column = char('A'+(col%26))+column;
        col/=26;
    }
    return column;
}

int excelToNum(string col){
    int columnNum = 0;
    for (int ch : col)
    {
        columnNum = columnNum*26+(ch-'A'+1);
    }
    return columnNum;
}

bool isRXCY(string s) {
    return s[0] == 'R' && isdigit(s[1]) && s.find('C')!=string::npos;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        if (isRXCY(s))
        {
            int r, c;
            sscanf(s.c_str(), "R%dC%d", &r, &c);
            cout<<numToExcel(c)<<r<<endl;
        }else
        {
            string colPart="";
            int i=0;
            while (isalpha(s[i]))colPart+=s[i++];
            int row = stoi(s.substr(i));
            cout<<"R"<<row<<"C"<<excelToNum(colPart)<<endl;
        }        
    }
    
    return 0;
}
