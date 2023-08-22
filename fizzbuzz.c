#include <stdio.h>

int main() {
  for (int i = 1; i <= 100; i++){
    if (i % 3 == 0) {
      if (i % 3 == 0 && i % 5 == 0) {
        printf("FizzBuzz\n");
        continue;
      }
      printf("Fizz\n");
      continue;
    } 
    if (i % 5 == 0) {
      if (i % 3 == 0 && i % 5 == 0) {
        printf("FizzBuzz\n");
        continue;
      }
      printf("Buzz\n");
      continue;
    }
    printf("%d\n", i);
  }
}
