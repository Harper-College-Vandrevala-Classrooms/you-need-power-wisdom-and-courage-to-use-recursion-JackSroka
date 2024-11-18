#include <iostream>
using namespace std;

int triangleNumber(int n) {
    if (n == 0) {
        return 0;                           // Recursive case when n = 0
    }
    else if (n > 0) {
        return n + triangleNumber(n - 1);   // Recursive case for positive n
    }
    else {
        return n + triangleNumber(n + 1);   // Recursive case for negative n
    }
}

int main() {
    int n, m;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of m: ";
    cin >> m;

    int triangleN = triangleNumber(n);
    int triangleM = triangleNumber(m);
    int sumOfTriangles = triangleN + triangleM;
    int subtractionOfTriangles = triangleN - triangleM;

    cout << "The " << n << "-th triangle number is: " << triangleN << endl;
    cout << "The " << m << "-th triangle number is: " << triangleM << endl;
    cout << "The sum of the " << n << "-th and " << m << "-th triangle numbers is: " << sumOfTriangles << endl;
    cout << "The difference of " << n << "-th and " << m << "-th triangle numbers is: " << subtractionOfTriangles << endl;

    return 0;
}