#include <iostream>
using namespace std;

void inputMatrix(int matrix[3][3]);
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
void displayMatrix(int matrix[3][3]);

int main() {
    int matrix1[3][3], matrix2[3][3];
    int sum[3][3], product[3][3];

    inputMatrix(matrix1);
    inputMatrix(matrix2);

    addMatrices(matrix1, matrix2, sum);
    multiplyMatrices(matrix1, matrix2, product);

    cout << "\n\nSUM OF MATRICES" << endl;
    displayMatrix(sum);
    cout << "\n\nPRODUCT OF MATRICES" << endl;
    displayMatrix(product);

    return 0;
}

void inputMatrix(int matrix[3][3]) {
    cout << "Enter elements of the matrix (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        	
        	/* Cij = Ai1 x B1j + Ai2 x B2j + Ai3 x B3j */
        	
        	/*C = [C11 C12 C13]
			      [C21 C22 C23]
			  	  [C31 C32 C33]*/
        	
        	/*C11 = A11 x B11 + A12 x B21 + A13 x B31
			  C12 = A11 x B12 + A12 x B22 + A13 x B32
			  C13 = A11 x B13 + A12 x B23 + A13 x B33

			  C21 = A21 x B11 + A22 x B21 + A23 x B31
			  C22 = A21 x B12 + A22 x B22 + A23 x B32
			  C23 = A21 x B13 + A22 x B23 + A23 x B33

			  C31 = A31 x B11 + A32 x B21 + A33 x B31
			  C32 = A31 x B12 + A32 x B22 + A33 x B32
			  C33 = A31 x B13 + A32 x B23 + A33 x B33*/
			  
            result[i][j] = matrix1[i][0] * matrix2[0][j] + matrix1[i][1] * matrix2[1][j] + matrix1[i][2] * matrix2[2][j];
        }
    }
}


/*

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] = result[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}


*/



void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
