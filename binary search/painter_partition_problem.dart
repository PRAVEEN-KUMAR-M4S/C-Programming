void main() {
  List<int> arr = [5, 5, 5, 5];
  int n = 4, m = 2;

  int ans = painterPartion(arr, n, m);
  print(ans);
}

bool isPossibleSolution(List<int> arr, int n, int m, int mid) {
  int painterCount = 1;
  int arraySum = 0;

  for (int i = 0; i < n; i++) {
    if (arraySum + arr[i] <= mid) {
      arraySum = arraySum + arr[i];
    } else {
      painterCount++;
      if (painterCount > m || arr[i] > mid) {
        return false;
      }
      arraySum = arr[i];
    }
  }
  return true;
}

int painterPartion(List<int> arr, int n, int m) {
  int start = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  int end = sum;
  int mid = (start + (end - start) / 2).toInt();
  int ans = 0;

  while (start <= end) {
    if (isPossibleSolution(arr, n, m, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = (start + (end - start) / 2).toInt();
  }
  return ans;
}
