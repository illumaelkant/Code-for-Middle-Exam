

#include <stdio.h>
#include <string.h>

int main() {
  char a[100005];
  char ch1, ch2;

  scanf("%s %c %c", a, &ch1, &ch2);
  for (int i = 0; a[i] != '\0'; i++) {
    if (a[i] == ch1) {
      a[i] = ch2;
    }
  }
  printf("%s", a);

  return 0;
}
