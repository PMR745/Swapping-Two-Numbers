#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "The value of a and b are " << a << " and "<< b;

    int temp = a; // Beginners Method using 3rd Variable
    a = b;
    b = temp;
    cout << "\nThe value of a and b are " << a << " and " << b;

    a = a + b; // Expert Method without using 3rd Variable
    b = a - b;
    a = a - b;
    cout << "\nThe value of a and b are " << a << " and " << b;


    a = (a*b)/(b=a); // Legend Method to Swap two numbers.
    
    cout << "\nThe value of a and b are " << a << " and " << b;

}
