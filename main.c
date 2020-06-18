// 문제 : 변수 c의 값을 변경해주세요.
// 조건 : c의 값을 직접 바꾸는 것은 안됩니다.
// 조건 : `c = 220;` 은 안됩니다.

#include <stdio.h>

int main(void) {
  
  unsigned char c = 200; // 1바이트 
  
  // 수정가능지역 시작
  unsigned char *p;

  p = &c;

  *p = 220;
  
  // 수정가능지역 끝

  printf("c : %d\n", c);
  // 출력 => c : 220

  return 0;
}