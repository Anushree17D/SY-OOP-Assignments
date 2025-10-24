#include <iostream>
using namespace std;

template <class T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int iArr[10] = {1,2,3,4,5,6,7,8,9,10};
    float fArr[10] = {1.1,2.2,3.3,4.4,5.5,1.1,2.2,3.3,4.4,5.5};
    double dArr[10] = {0.5,1.5,2.5,3.5,4.5,0.5,1.5,2.5,3.5,4.5};

    cout << "Sum of Integer array: " << sumArray(iArr, 10) << endl;
    cout << "Sum of Float array: " << sumArray(fArr, 10) << endl;
    cout << "Sum of Double array: " << sumArray(dArr, 10) << endl;

    return 0;
}
