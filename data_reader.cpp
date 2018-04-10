#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;

int main(){

    ifstream reader("Data_Files/Data.txt")    ;
    ofstream writer("Data_Files/Generated.lol");

    if(reader == NULL){
        cout<<"Error reading files"<<endl;
        return -1;
    }

    string dataStart = "<data>";
    string dataEnd = "</data>";
    int offset = 6;

    string s,temp;
    while(!reader.eof()){
        getline(reader,s);
        
        temp = s.substr(s.find(dataStart)+offset,s.find(dataEnd)-s.find(dataStart)-offset);
        temp += ' ';
        cout<<temp;
        writer << temp;

    }
    writer.close();
    reader.close();
    return 0;
}
















