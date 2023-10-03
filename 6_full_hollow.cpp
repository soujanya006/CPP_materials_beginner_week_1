#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number";
    cin>>n;

    for(int row=0;row<n;row++){


        // for the space initial
        for(int col_1=0;col_1<n-row-1;col_1++){
            cout<<" ";
        }
        // star and space inside 
        for(int col_2=0;col_2<row+1;col_2++)
        {
            if(col_2==0 || col_2==row+1-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";

            }
            
        }

    cout<<endl;    
    }





    for(int row=0;row<n;row++){

        for(int col=0;col<row;col++){
            cout<<" ";
        }

        for(int col=0;col<n-row;col++)
        {
            if(col==0 || col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";

            }
            
        }

    cout<<endl;    
    }



}