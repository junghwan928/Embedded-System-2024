#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024

void readUserInfoFromFile(char *id, char *password) {
    char msg1[SIZE];
    FILE *fd = fopen("myinfo.txt", "r");
    if (fd == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1);
    }

    printf("-----정보출력-----\n");
    while (fscanf(fd, "%s", msg1) != EOF) {
        printf("%s\n", msg1);
    }
    printf("-----출력끝-----\n");
    fclose(fd);
}

void main() {
    char ID[] = "lee0928";
    char PS[] = "roy1234";
    char id[SIZE];
    char ps[SIZE];

    printf("PROJECT 01\n");
    printf("아이디와 비밀번호를 입력하시오.\n");
    printf("ID:");
    scanf("%s", id);
    printf("PASSWORD:");
    scanf("%s", ps);

    int id_result = strcmp(ID, id);
    int ps_result = strcmp(PS, ps);
    if (id_result == 0 && ps_result == 0) {
        readUserInfoFromFile(ID, PS);
    } else {
        printf("아이디나 비밀번호가 불일치합니다.");
    }
}
