#include<iostream>
using namespace std;

int main()
{
    for(int row=1; row<=5; row++)
    {
        for(int col=1; col<=5; col++)
        {
            if(row==1 || row==5) // Top and Bottom rows
            {
                cout << "*";
            }
            else
            {
                if(col==1 || col==5) // Leftmost and Rightmost columns
                {
                    cout << "*";
                }
                else 
                {
                    cout << " "; // Inside of the rectangle
                }
            }  
        }
        cout << endl; // Move to the next line after completing one row
    }

    return 0;  // Indicate successful execution
}
