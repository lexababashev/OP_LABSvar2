#include <iostream>
#include<ctime>
#include<cmath>
#include<iomanip>

using namespace std;

int elem_of_ResArr(int, int, int**, int);
int** initialize_matrix(int);
int** initialize_ResMatrix(int**, int);
void print(int**, int);
void clear(int**, int);


int main() {
    srand(time(NULL));
    cout << "enter n = ";
    int n; cin >> n;
    int** A = initialize_matrix(n);
    print(A, n);

    cout << endl << "===============================" << endl << endl;

    int** B = initialize_ResMatrix(A, n);
    print(B, n);


    clear(A, n);
    clear(B, n);
}

int elem_of_ResArr(int row, int col, int** matrix, int size)
{
    int f_j = col, l_j = col, max = matrix[row][col];
    for (int i = row; i < size; i++)
    {
        for (int j = f_j; j <= l_j; j++)
        {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }


        if (f_j - 1 >= 0) {
            f_j--;
        }

        if (l_j + 1 < size) {
            l_j++;
        }
    }
    return max;
}


int** initialize_matrix(int size) {
    int** matrix = new int* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = -10 + rand() % 21;
        }
    }
    return matrix;
}

int** initialize_ResMatrix(int** matrix, int size) {
    int** resmatrix = new int* [size];
    for (int i = 0; i < size; i++) {
        resmatrix[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            resmatrix[i][j] = elem_of_ResArr(i, j, matrix, size);
        }
    }


    return resmatrix;
}

void print(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(7) << matrix[i][j];
        }
        cout << endl << endl;
    }
}

void clear(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete matrix;
}