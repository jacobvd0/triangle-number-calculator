#include <iostream>

int calcTriangle(int _triangleNum) {

    int result = 0;
    for (int tempTriangle = _triangleNum; tempTriangle >= 0; tempTriangle--) {
        result = result + tempTriangle;
    }
    return result;
}

int main() {
    int triangleNum = 0;
    std::cout << "Triangle Number: ";
    std::cin >> triangleNum;
    std::cout << "\n";

    std::cout << "The result is " << calcTriangle(triangleNum);

    return 0;
}

