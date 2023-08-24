#include <iostream>
const int MaxElements = 100;
int gVect[MaxElements]; // Buffer to save the elements
int gnCount = 0; // Counter to know the number of elements used

void Insert(int elem) {
    if (gnCount < MaxElements) {
        gVect[gnCount++] = elem;
    }
}

int main() {
    // Insert elements into the fixed-size vector
    Insert(42);
    Insert(73);
    Insert(15);

    // Print the elements in the vector
    std::cout << "Elements in the vector: ";
    for (int i = 0; i < gnCount; ++i) {
        std::cout << gVect[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


