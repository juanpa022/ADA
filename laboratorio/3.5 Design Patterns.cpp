#include <vector>
#include <list>
#include <iostream>
using namespace std;
template <typename Container>
void Write(const Container& ds, std::ostream& os) {
    typename Container::const_iterator iter = ds.begin(); 
    for (; iter != ds.end(); ++iter) 
        os << *iter << endl;
}
int main() {
    std::list<float> mylist;
    std::vector<float> myvector;

    for (int i = 0; i < 10; ++i) {
        mylist.push_back(static_cast<float>(i));
        myvector.push_back(static_cast<float>(i + 50));
    }
    Write(mylist, std::cout);
    std::cout << "---------------" << std::endl;
    Write(myvector, std::cout);

    return 0;
}