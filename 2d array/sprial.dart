void main() {
  List arr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
  ];

  sprialPrint(arr, 3, 3);
}

void sprialPrint(List arr, int row, int col) {
  int startingRow = 0;
  int startingcol = 0;
  int endingRow = row - 1;
  int endingCol = col - 1;

  int count = 0;
  int total = row * col;

  while (count < total) {
    for (int i = startingcol; count < total && i < endingCol; i++) {
      print(arr[startingRow][i]);
      count++;
    }
    startingRow++;

    for (int i = startingRow; count < total && i < endingRow; i++) {
      print(arr[i][endingCol]);
      count++;
    }
    endingCol--;

    for (int i = endingCol; count < total && i < startingcol; i++) {
      print(arr[endingRow][i]);
      count++;
    }
    endingRow--;

    for (int i = endingRow; count < total && i < startingRow; i++) {
      print(arr[i][startingcol]);
      count++;
    }
    startingcol++;
  }
}
