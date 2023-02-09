#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> roundMatrix(vector<vector<double>> matrix) {
    int n = matrix.size();
    vector<vector<int>> roundedMatrix(n, vector<int>(n));
    vector<int> rowSums(n), colSums(n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] - floor(matrix[i][j]) < 0.5) {
                roundedMatrix[i][j] = floor(matrix[i][j]);
            } else {
                roundedMatrix[i][j] = ceil(matrix[i][j]);
            }
            rowSums[i] += roundedMatrix[i][j];
            colSums[j] += roundedMatrix[i][j];
        }
    }
    
    return roundedMatrix;
}

int main() {
    vector<vector<double>> matrix = {{1.3, 2.3, 3.4}, {4.5, 5.3, 6.2}, {7.2, 8.4, 9.4}};
    vector<vector<int>> roundedMatrix = roundMatrix(matrix);
    
    for (int i = 0; i < roundedMatrix.size(); i++) {
        for (int j = 0; j < roundedMatrix.size(); j++) {
            cout << roundedMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}