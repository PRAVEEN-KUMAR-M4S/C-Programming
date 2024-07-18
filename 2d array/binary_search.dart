void main() {
  List<List> arr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
  ];

  int ans = binarySearch2d(arr, 6);
  print(ans);
}

int binarySearch2d(List<List> arr, int target) {
  int row = arr.length;
  int col = arr[0].length;

  int start = 0;
  int end = row * col - 1;

  int mid = (start + (end - start) / 2).toInt();

  while (start <= end) {
    int element = arr[mid ~/ col][mid % col];
    if (element == target) {
      return 1;
    } else if (element < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return 0;
}
