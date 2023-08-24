#include <iostream>
#include <cstdlib>

struct Vector {
    int* m_pVect; 
    int m_nCount;
    int m_nMax;   
    int m_nDelta; 
};

void Resize(Vector* pThis) {
    const int delta = 10; 
    pThis->m_pVect = (int*)realloc(pThis->m_pVect, sizeof(int) * (pThis->m_nMax + pThis->m_nDelta));
    pThis->m_nMax += pThis->m_nDelta; 
}

void Insert(Vector* pThis, int elem) {
    if (pThis->m_nCount == pThis->m_nMax) {
        Resize(pThis); 
    pThis->m_pVect[pThis->m_nCount++] = elem; 
}

int main() {
    Vector myVector;
    myVector.m_pVect = nullptr;
    myVector.m_nCount = 0;
    myVector.m_nMax = 0;
    myVector.m_nDelta = 10;
    Insert(&myVector, 42);
    Insert(&myVector, 73);
    Insert(&myVector, 15);

   
    std::cout << "Elementos in the vector: ";
    for (int i = 0; i < myVector.m_nCount; ++i) 
        std::cout << myVector.m_pVect[i] << " ";
    std::cout << std::endl;
    free(myVector.m_pVect);

    return 0;
}
