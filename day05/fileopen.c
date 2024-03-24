#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void main() {
    int fd1, fd2; // 파일 디스크립터 선언
    char str[] = "wonderful day"; // 쓸 문자열
    char buf[1024]; // 읽을 버퍼

    // 파일 열기 (읽기/쓰기 가능하며, 파일이 이미 존재하면 내용을 지우고 새로 생성, 접근 권한 0600)
    fd1 = open("mytest.txt", O_CREAT | O_RDWR | O_TRUNC, 0600);
    if(fd1 < 0) printf("Open Error"); // 파일 열기 실패 시 에러 메시지 출력
    if(write(fd1, str, strlen(str)) < 0) printf("Write Error"); // 파일에 문자열 쓰기
    close(fd1); // 파일 닫기

    // 파일 열기 (읽기 전용)
    fd1 = open("mytest.txt", O_RDONLY);
    if(read(fd1, buf, 1024) < 0) printf("Read Error"); // 파일로부터 읽은 내용을 버퍼에 저장
    close(fd1); // 파일 닫기

    printf("%s\n", buf); // 버퍼에 저장된 내용을 출력

    // 파일 열기 (읽기/쓰기 가능하며, 파일이 이미 존재하면 내용을 지우고 새로 생성, 접근 권한 0600)
    fd2 = open("mytest_copy.txt", O_RDWR | O_CREAT | O_TRUNC, 0600);
    if(fd2 < 0) printf("Open Error"); // 파일 열기 실패 시 에러 메시지 출력
    if(write(fd2, buf, strlen(buf) + 1) < 0) printf("Write Error"); // 버퍼의 내용을 파일에 쓰기 (null 문자 포함)
    close(fd2); // 파일 닫기
}
/*
1. 파일 디스크립터 닫기:
  - 첫 번째 파일 디스크립터 fd1을 닫은 후에는 두 번째 파일 디스크립터 fd2도 닫아주어야 함. 
  - 파일을 열 때마다 새로운 파일 디스크립터가 할당되므로, 각 파일 디스크립터를 열었으면 적절히 닫아주어야 함. 
  - 이를 통해 파일을 올바르게 닫음으로써 파일을 사용하는 동안 자원 누수를 방지할 수 있음.
  
2. 문자열의 null 종료:
  - 파일을 읽은 후에는 버퍼에 저장된 문자열을 null 종료하여 문자열로 만들어주어야 함. 
  - 문자열을 printf 함수로 출력하기 위해서는 null 종료된 문자열이어야 하기 때문. 
  - 이를 위해 read 함수로 읽은 데이터 뒤에 null 문자('\0')를 추가.

3. 파일에 문자열 쓰기:
  - 두 번째 파일 디스크립터 fd2를 사용하여 버퍼에 저장된 문자열을 파일에 쓰는 과정에서 write 함수를 사용. 
  - write 함수는 파일 디스크립터에 데이터를 씀. 
  - write 함수에 사용한 strlen(buf) + 1은 문자열의 길이에 null 문자를 포함하여 파일에 쓰도록 하기 위함.

*/
