#include <iostream>

class Matrix {
private:
    int matrix[3][3];

public:
    Matrix(int inputMatrix[3][3]) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                matrix[i][j] = inputMatrix[i][j];
            }
        }
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result(matrix); // Initialize result with the current matrix

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                result.matrix[i][j] += other.matrix[i][j];
            }
        }

        return result;
    }

    void printMatrix() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int input1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int input2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    Matrix OBJ1(input1);
    Matrix OBJ2(input2);
    Matrix OBJ3 = OBJ1 + OBJ2;

    OBJ3.printMatrix();

    return 0;
}
