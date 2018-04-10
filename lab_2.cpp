#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*
    This is done using vector which is not a necessity but a practice for me

*/
int main(){

    vector <int> a(10);
    int ar[10];

    cout <<a.size()<<" "<<endl;
    for(int i=0; i< 10;i++){
        cin>>ar[i];
    }

    a.assign(ar,ar+10);
    sort(a.begin(),a.begin()+10);

    cout<<a.back()<<endl;


    return 0;
}
