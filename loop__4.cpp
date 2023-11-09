#include <iostream>
using namespace std;
// nested loop example 
int main(){

    for(int i=0;i<5;i++){
        cout<<endl;
        cout<<"outer loop "<<i<<endl;
        

        for(int j=0;j<5;j++){
            cout<<"inner loop "<<j<<endl;
        }
    }
    return 0;

    
}