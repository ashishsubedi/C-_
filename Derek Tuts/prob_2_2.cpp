#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;
int main(){

    string sOperation;
    vector <string> nums;
    float result;

    cout<<"Enter operation(Eg: 2 + 3)"<<endl;
    
    getline(cin,sOperation);

    stringstream ss(sOperation);
    string temp;
    char delimiter = ' ';

    while(getline(ss,temp,delimiter)){
        nums.push_back(temp);
        cout<<temp<<endl;
    }
    if(nums[1] == "+"){
        result = stod(nums[0])+ stod(nums[2]);
    }else  if(nums[1] == "-"){
        result = stod(nums[0]) - stod(nums[2]);
    }else  if(nums[1] == "*"){
        result = stod(nums[0]) * stod(nums[2]);
    }else  if(nums[1] == "/"){
        result = stod(nums[0]) / stod(nums[2]);
    }else{
        cout << "Enter a valid symbol."<< endl;
        return -1;
    }

    cout<< result<<endl;
    return 0;
}
