#include <iostream>
using namespace std;

int rectangleArea(int L, int w) {
    return L * w;
}

int main () {
    int L = 6;
    int w = 5;
    int area = rectangleArea(L, w);
    cout << "Area of rectangle = " << area << endl;
    return 0;
}