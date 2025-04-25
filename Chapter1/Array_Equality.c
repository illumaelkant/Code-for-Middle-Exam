

#include <stdio.h>

void check_equal(int a[], int n, int b[], int m) {
  if (n != m) {
    printf("0\n");
    return;
  } else {
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        printf("0\n");
        return;
      }
    }
  }
  printf("1\n");
}

int main() {
  int n; // number of tests
  scanf("%d", &n);

  int a[1000], b[1000];
  int a1, b1;

  for (int i = 1; i <= n; i++) {
    scanf("%d %d", &a1, &b1);
    for (int i = 0; i < a1; i++) {
      scanf("%d", &a[i]);
    }
    for (int i = 0; i < b1; i++) {
      scanf("%d", &b[i]);
    }
    check_equal(a, a1, b, b1);
  }

  return 0;
}
