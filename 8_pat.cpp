#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter the number of rows ";
    cin>>n;

    cout<<"....................";

    for(int row=0;row<n;row++){

        for(int col=0;col<row;col++){
            cout<<" ";

        }
        for(int col=0; col<n-row;col++){
            cout<<"* ";
        }

    cout<<endl;
    }
}