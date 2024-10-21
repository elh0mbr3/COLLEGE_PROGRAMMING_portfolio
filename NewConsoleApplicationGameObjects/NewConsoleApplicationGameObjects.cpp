#include <iostream>     // For input/output operations
#include <string>       // For using std::string
#include <vector>       // For using std::vector to store dynamic lists of objects

using std::cin;
using std::cout;

int size;  // Variable to hold the number of objects

int main()
{
    // Prompt the user to input the number of objects
    cout << "Enter a desired amount of objects:\n";
    cin >> size;

    // Create a vector of strings to store the objects, with initial size equal to 'size'
    std::vector<std::string> Objects(size);

    // Prompt the user to input the actual objects
    cout << "\nEnter " << size << " objects:\n";

    // Loop to take input for each object
    for (int i = 0; i < size; i++) {
        cin >> Objects[i];  // Store the input string in the vector
    }

    // Output the objects that were entered
    cout << "\nObjects:\n";
    for (int i = 0; i < size; i++) {
        cout << Objects[i] << "\n";  // Print each object
    }

    return 0;
}
