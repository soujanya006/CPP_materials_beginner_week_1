#include<iostream>
using namespace std;

int main(){

    // Declare an integer variable to store the size of the square
    int n;

    // Prompt the user for input
    cout << "Enter the number for solid square pattern size:" << endl;
    cin >> n;  // Read the size from user input



    // Loop for each row of the square
    for (int i = 1; i <= n; i++)
    {
        // Loop for each column of the square
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";  // Print an asterisk followed by a space
        }
        cout << endl;  // Move to the next line after completing one row
    }

    return 0;  // Return 0 to indicate successful execution
}
