#include <iostream>
using namespace std;

int main() {
  int rows, colons, mat[35][35];
  int rows_transposed, colons_transposed, transposed[35][35];
  int i,j;
  // Citire
  cin>>rows>>colons;
  for (i = 1; i <= rows; ++i)
    for (j = 1; j <= colons; ++j)
      cin>>mat[i][j];
  // compute transposed
  rows_transposed = colons;
  colons_transposed = rows;
  for (i = 1; i <= rows; ++i)
    for (j = 1; j <= colons; ++j) {
      // line i becomes column i, column j becomes line j
      // this means that the element that was on line i, column j, will end up on column i, line j
      transposed[j][i] = mat[i][j];
    }
  for (i = 1; i <= rows_transposed; ++i) {
    for (j = 1; j <= colons_transposed; ++j)
      cout<<transposed[i][j]<<" ";
    cout<<"\n";
  }
  return 0;
}
