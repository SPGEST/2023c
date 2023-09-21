#include <stdio.h>

union Number {
  int intValue;
  float floatValue;
};

int main() {
  union Number num;

  num.intValue = 10; // 정수 값 할당
  printf("Integer value: %d\n", num.intValue);

  num.floatValue = 3.14; // 실수 값 할당
  printf("Float value: %.2f\n", num.floatValue);

  return 0;
}