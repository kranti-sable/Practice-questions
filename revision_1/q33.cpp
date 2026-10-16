#include<iostream>
#include<vector>
using namespace std;
int main(){

    // An empty 2D vector (0 rows to start)
    vector<vector<int>> grid;

    // Row 0 has 2 elements
    vector<int> row1 = {1, 2};
    // Row 1 has 4 elements
    vector<int> row2 = {3, 4, 5, 6};
    // Row 2 has 1 element
    vector<int> row3 = {7};

    // Push each row into the 2D grid
    grid.push_back(row1);
    grid.push_back(row2);
    grid.push_back(row3);

    // Print using range-based for loops
    for (const vector<int> &row : grid) {
        for (int val : row) {
  
        cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
