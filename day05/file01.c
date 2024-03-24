/*
파일 만들기
*/

#include<stdio.h>
#include <stdlib.h>
 
void main()
 {
   char msg[20] = "File Test!!";

   FILE*fp;  // 파일 포인터
   fp = fopen("test.txt","w");  // 파일오픈
   if(fp == NULL) {
     fprintf(stderr, "Error"); // 파일에서printf : fprintf 함수 사용
     exit(1);
  }
   
   fprintf(fp, "%s", msg); // 파일로 출력
   
   printf("%s", msg);
   
   printf("file descriptor: %d\n",fp);
   
   fclose(fp);

 }
