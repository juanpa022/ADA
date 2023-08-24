#include <iostream>
#include <cstdlib>

template <typename Type>
class CVector {
private:
    Type* m_pVect;
    int m_nCount;
    int m_nMax;
    int m_nDelta;
    void Init(int delta) {
        m_pVect = nullptr;
        m_nCount = 0;
        m_nMax = 0;
        m_nDelta = delta;
    }

    void Resize() {
        const int delta = 10;
        m_pVect = (Type*)realloc(m_pVect, sizeof(Type) * (m_nMax + delta));
        m_nMax += delta;
    }
public:
    CVector(int delta = 10) {
        Init(delta);
    }

    void Insert(Type elem) {
        if (m_nCount == m_nMax) {
            Resize();
        }
        m_pVect[m_nCount++] = elem;
    }

    void PrintElements() {
        std::cout << "Elementos in the vector: ";
        for (int i = 0; i < m_nCount; ++i) 
            std::cout << m_pVect[i] << " ";
        std::cout << std::endl;
    }
};
int main() {
    CVector<int> intVector;
    CVector<double> doubleVector;

    intVector.Insert(42);
    intVector.Insert(73);
    intVector.Insert(15);

    doubleVector.Insert(3.14);
    doubleVector.Insert(2.718);

    intVector.PrintElements();
    doubleVector.PrintElements();

    return 0;
}
