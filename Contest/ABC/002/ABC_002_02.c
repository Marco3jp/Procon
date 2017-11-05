#include <stdio.h>

int main(int argc, char const *argv[]) {
  char rituko[31]={};int x=0;
  scanf("%s",rituko);
  for (x = 0;rituko[x] != '\0';x++);

  for (size_t i = 0; i < x; i++) {
    if (rituko[i] == 'a' || rituko[i] == 'i' || rituko[i] == 'u' || rituko[i] == 'e' || rituko[i] == 'o') {
      for (size_t r = 0; r < i; r++) {
        rituko[r] = rituko[r+1];
        i--;
      }
    }
  }

  printf("%s\n",rituko);
  return 0;
}
