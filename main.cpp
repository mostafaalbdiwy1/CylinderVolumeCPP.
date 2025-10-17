#include <iostream>
using namespace std;

const double PI = 3.14159;
const string programVersion = "1.0";

int main() {
    double radius;
    double height;
    double volume;

    cout << "Program version " << programVersion << endl << endl;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume = PI * radius * radius * height;

    cout << "The volume of the cylinder is: " << volume << endl << endl;
  
    return 0;
}
Add cylinder volume program
