#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrixMultiply(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int n1 = matrix1.size();       // Number of rows in matrix1
    int m1 = matrix1[0].size();    // Number of columns in matrix1
    int n2 = matrix2.size();       // Number of rows in matrix2
    int m2 = matrix2[0].size();    // Number of columns in matrix2

    // Check if the matrices can be multiplied
    if (m1 != n2) {
        cout << "Error: Matrices cannot be multiplied." << endl;
        return {};
    }

    // Create the resulting matrix with dimensions n1 x m2 and initialize with zeros
    vector<vector<int>> result(n1, vector<int>(m2, 0));

    // Perform matrix multiplication
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < m1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

int main() {
    int n1, m1, n2, m2;

    cin >> n1>>m1;

    vector<vector<int>> matrix1(n1, vector<int>(m1));
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cin >> matrix1[i][j];
        }
    }
    
    cin >> n2>>m2;
    vector<vector<int>> matrix2(n2, vector<int>(m2));
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            cin >> matrix2[i][j];
        }
    }

    vector<vector<int>> result = matrixMultiply(matrix1, matrix2);

    cout << "Result: " << endl;
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
