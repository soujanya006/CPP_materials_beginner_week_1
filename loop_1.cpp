#include<iostream>
using namespace std;

int main()

{
// simple concept of 2 loops 
    for (int i=1;i<=3; i++)
    {
        cout<<endl<<"outer loop "<<i<<endl<<endl;
        for (int j = 1; j <=3; j++)
        {
            cout<<"inner loop "<< j <<endl;
        }
    }
}