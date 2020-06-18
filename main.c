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



// 문제 : C언어에 있는 모든 포인터타입변수의 크기를 출력해주세요.

  // 정수타입, 실수타입, 주소타입
  
  printf("%lu\n", sizeof(double));  
  printf("%lu\n", sizeof(long long int));
  printf("%lu\n", sizeof(long));
  printf("%lu\n", sizeof(float));
  printf("%lu\n", sizeof(char));
  printf("%lu\n", sizeof(unsigned int));
  printf("%lu\n", sizeof(unsigned char));

  




  return 0;
}
