// QUESTION #2: Write a program that will display an equilateral triangle with a height depending on the user. The minimum height is 1, the maximum height is 10.
// Use an array to display the specific character on the specific row. The array will be: { 0 := “A”, 1:= “B”, 2 := “C”, 3 := “D”, 4 := “E”, 5 := “F”, 6 := “G”, 7 := “H”, 8 := “I”, 9 := “J” }.
// You are limited to four (4) variables only (including the array).


#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
    char arr[] = "ABCDEFGHIJ";
    int n;

    cout << "Enter Height (1-10): ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int x = 0; x < n - i; x++) {
            cout << " ";
        }
        for (int y = 0; y < (i*2) + 1; y++) {
            cout << arr[i];
        }
        cout << endl;
    }
    
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;

}