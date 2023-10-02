#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number";
    cin>>n;



    for(int row=0;row<n;row++){

        for(int col_1=0;col_1<n-row-1;col_1++){
            cout<<" ";
        }

        for(int col_2=0;col_2<row+1;col_2++)
        {
            cout<<"* ";
        }

    cout<<endl;    
    }

    for(int row=0;row<n;row++){

        for(int col_1=0;col_1<row;col_1++){
            cout<<" ";
        }

        for(int col_2=0;col_2<n-row;col_2++)
        {
            cout<<"* ";
        }

    cout<<endl;    
    }



}