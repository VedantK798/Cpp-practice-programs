#include <iostream>
#include <vector>

using namespace std;

class PascalTriangle {
private:
    vector<vector<int>> triangle;

public:
    PascalTriangle(int rows) {
        triangle.resize(rows);

        for (int i = 0; i < rows; i++) {
            triangle[i].resize(i + 1);
            triangle[i][0] = 1;
            triangle[i][i] = 1;

            for (int j = 1; j < i; j++) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    void printTriangle() {
        for (const auto& row : triangle) {
            for (const auto& value : row) {
                cout <<" "<< value << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    PascalTriangle pascal(rows);
    pascal.printTriangle();

    return 0;
}
