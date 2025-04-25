

// Given a list of recentages

#include <stdio.h>

int find_min(int a[], int n) {
  int min = 9999;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
    }
  }
  return min;
}

int find_max(int a[], int n) {
  int max = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int main() {
  int n;
  int x[10000], y[1000];
  scanf("%d", &n);

  for (int i = 0; i <= 2 * n - 1; i++) {
    scanf("%d %d", &x[i], &y[i]);
  }

  int x_max = find_max(x, 2 * n);
  int x_min = find_min(x, 2 * n);

  int y_min = find_min(y, 2 * n);
  int y_max = find_max(y, 2 * n);

  int area = (x_max - x_min) * (y_max - y_min);
  printf("%d", area);

  return 0;
}
