#include <iostream>
#include <cstdlib> 

int* gpVect = nullptr; 
int gnCount = 0;      
int gnMax = 0;         
void Resize() {
    const int delta = 10;
    gpVect = (int*)realloc(gpVect, sizeof(int) * (gnMax + delta));
    gnMax += delta; 
}
void Insert(int elem) {
    if (gnCount == gnMax) {
        Resize(); 
    }
    gpVect[gnCount++] = elem; 
}
int main() {
    
    Insert(42);
    Insert(73);
    Insert(15);

    std::cout << "Elements in the vector: ";
    for (int i = 0; i < gnCount; ++i) 
        std::cout << gpVect[i] << " ";

    std::cout << std::endl;
    free(gpVect);
    return 0;
}
