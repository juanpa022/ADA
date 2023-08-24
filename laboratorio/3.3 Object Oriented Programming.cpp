#include <iostream>
#include <cstdlib>

class CVector {
private:
    int* m_pVect;
    int m_nCount;
    int m_nMax;
    int m_nDelta;

    void Resize() {
        const int delta = 10;
        m_pVect = (int*)realloc(m_pVect, sizeof(int) * (m_nMax + delta));
        m_nMax += delta;
    }
public:
    CVector(int delta = 10);
    void Insert(int elem);
    void PrintElements();
};

CVector::CVector(int delta) : m_pVect(nullptr), m_nCount(0), m_nMax(0), m_nDelta(delta) {
}

void CVector::Insert(int elem) {
    if (m_nCount == m_nMax) {
        Resize();
    }
    m_pVect[m_nCount++] = elem;
}

void CVector::PrintElements() {
    std::cout << "Elements in the vector: ";
    for (int i = 0; i < m_nCount; ++i) 
        std::cout << m_pVect[i] << " ";
    std::cout << std::endl;
}

int main() {
    CVector myVector;
    myVector.Insert(42);
    myVector.Insert(73);
    myVector.Insert(15);
    myVector.PrintElements();

    return 0;
}
