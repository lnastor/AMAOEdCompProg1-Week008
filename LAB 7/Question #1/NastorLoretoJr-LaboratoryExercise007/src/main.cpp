// QUESTION #1:	Write a program that will accept five (5) integers and display them to the users. You are limited to 
// using only two (2) variables (including the array).

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {

    int n[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter number(" << i + 1 << "): ";
        cin >> n[i];
    }

    cout << "\nThe entered numbers are " << n[0] << ", " << n[1] << ", " << n[2] << ", " << n[3] << " and " << n[4] << ".";
    cout << endl;


system ("pause");
    return EXIT_SUCCESS;

}