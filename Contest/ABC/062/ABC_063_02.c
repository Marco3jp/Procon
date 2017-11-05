#include <stdio.h>

int main(int argc, char const *argv[]) {
  char s[28]={};int length=0;
  scanf("%s",s);
  for (size_t i = 0; s[i]!='\0'; i++) {
    length++;
  }

  for (size_t i = 0; i < length; i++) {
    for (size_t j = i+1; j < length; j++) {
      if (s[i]==s[j]) {
        printf("no\n");
        return 0;
      }
    }
  }
  printf("yes\n");
  return 0;
}
