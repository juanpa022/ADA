#include <iostream>
const int MaxElements = 100;
int gVect[MaxElements]; 
int gnCount = 0; 

void Insert(int elem) {
    if (gnCount < MaxElements) {
        gVect[gnCount++] = elem;
    }
}
int main() {  
    Insert(42);
    Insert(73);
    Insert(15);
    std::cout << "Elementos in the vector: ";
    for (int i = 0; i < gnCount; ++i) {
        std::cout << gVect[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
