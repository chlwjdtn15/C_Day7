// 문제 : 변수 c의 값을 변경해주세요.
// 조건 : c의 값을 직접 바꾸는 것은 안됩니다.
// 조건 : `c = 220;` 은 안됩니다.

#include <stdio.h>

int main(void) {
  
//   unsigned char c = 200; // 1바이트 
  
//   // 수정가능지역 시작
//   unsigned char *p;

//   p = &c;

//   *p = 220;
  
//   // 수정가능지역 끝

//   printf("c : %d\n", c);
//   // 출력 => c : 220



// // 문제 : C언어에 있는 모든 포인터타입변수의 크기를 출력해주세요.

//   // 정수타입, 실수타입, 주소타입
  
//   printf("%lu\n", sizeof(double));  
//   printf("%lu\n", sizeof(long long int));
//   printf("%lu\n", sizeof(long));
//   printf("%lu\n", sizeof(float));
//   printf("%lu\n", sizeof(char));
//   printf("%lu\n", sizeof(unsigned int));
//   printf("%lu\n", sizeof(unsigned char));

  
  // 문제 : char 변수 b를 이용하지 않고 b의 값을 훼손
  // 조건 : 포인터 변수를 사용해서 값을 변경해야 한다.
  // 조건 : 수정가능 지역에서 b 라는 변수를 언급하면(사용하면) 안됩니다. 

    char a = 1;
    char b = 5;

  printf("== 변수의 주소 ==\n");
  printf("&a : %ld\n", (long)&a);
  printf("&b : %ld\n", (long)&b);

  // 수정가능지역 시작
  char *p = &a  -1 ;

  *p = 10;


  char *u = &a;

  *u = 2;





  // 수정가능지역 끝

  printf("== 변수의 값 ==\n");
  printf("a : %d\n", a);
  // 출력 => a : 2
  printf("b : %d\n", b);
  // 출력 => b : 10


  return 0;
}
