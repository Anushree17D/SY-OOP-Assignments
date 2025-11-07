#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    cout << "Initial Vector: " << endl;
    for (auto i = v.begin(); i != v.end(); ++i) {
        cout << *i << " " << endl;
    }

    cout << "Multiply by 10" << endl;
    for (auto i = v.begin(); i != v.end(); ++i) {
        *i = (*i) * 10;
    }

    cout << "New Vector: " << endl;
    for (auto i = v.begin(); i != v.end(); ++i) {
        cout << *i << " " << endl;
    }

    return 0;
}
