#include "Matrix.h"
#include <iostream>
#include <cassert>

int main() {
    Matrix matrix1(3, 3);
    matrix1.fillRandom();
    std::cout << "Matrix 1" << std::endl;
    std::cout << matrix1 << std::endl;

    Matrix matrix2(3, 3);
    matrix2.fillRandom1();
    std::cout << "Matrix 2" << std::endl;
    std::cout << matrix2 << std::endl;

    Matrix matrix3 = matrix1 + matrix2;
    std::cout << "Summa" << std::endl;
    std::cout << matrix3 << std::endl;

    Matrix matrix4 = matrix1 - matrix2;
    std::cout << "Subtraction" << std::endl;
    std::cout << matrix4 << std::endl;

    Matrix matrix5 = matrix1 * matrix2;
    std::cout << "Multiply" << std::endl;
    std::cout << matrix5 << std::endl;

    assert(matrix1 != matrix2);
    assert(matrix1 == matrix1);

    return 0;
}