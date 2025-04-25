

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char line[1000];
  int count = 0;
  int i = 0;

  int isword = 0;

  while (fgets(line, 1000, stdin)) {
    for (int i = 0; line[i] != '\0'; i++) {
      if (isspace(line[i])) {
        isword = 0;
      } else if (isword == 0) {
        isword = 1;
        count++;
      }
    }
  }
  printf("%d", count);

  return 0;
}
