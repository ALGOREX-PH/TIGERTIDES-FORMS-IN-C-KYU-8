#include <iostream>
using namespace std;
int seats_in_theater(int total_col, int total_row, int col, int row) {
  int compute_column = total_col + 1 - col;
  int compute_row = total_row - row;
  int answer = compute_column * compute_row;
  return answer;
}
int main (){
	int total_col_input = 16;
	int total_row_input = 11;
	int col_input = 5;
	int row_input = 3;
	int result = seats_in_theater(total_col_input, total_row_input, col_input, row_input);
	cout << result << endl;
}