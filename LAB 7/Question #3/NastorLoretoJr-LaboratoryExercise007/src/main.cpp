// QUESTION #3:	Write a program that will ascendingly sort six (6) integers from the user. Use only four (4) variables (including the array).

#include <cstdlib>
#include <iostream>

using namespace std;

int main () {
    int x[6];

    for (int i = 0; i < 6; i++) {
        cout << "Enter number [" << i + 1 << "]: ";
        cin >> x[i];
    }

    for (int i = 0; i < 6; i++) {
        for (int n = i; n < 6; n++) {
            if (x[i] > x[n]) {
                int temp = x[i];
                x[i] = x [n];
                x[n] = temp;
            }
        }
    }
    
    cout << "\nThe sorted numbers are: " << x[0] << ", " << x [1] << ", " << x[2] << ", " << x[3] << ", " << x[4] << ", and " << x[5] << ".";

    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
