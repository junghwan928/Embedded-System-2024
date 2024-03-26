#include <stdio.h>
#include <stdlib.h>
#include "book.h"

void main() {
    int menu_num;
    head = (book*)malloc(sizeof(book));
    head->next = NULL;

    while (1) {
        printf("******도서관리 프로그램******\n");
        printf("1. 도서 구입(등록)\n");
        printf("2. 도서 검색\n");
        printf("3. 도서 삭제\n");
        printf("4. 도서 출력\n");
        printf("0. 종료\n\n");

        printf("메뉴를 입력하세요. > ");
        scanf("%d", &menu_num);

        if (menu_num == 1) {
            post_addMenu();
        }
        else if (menu_num == 2) {
            searchMenu();
        }
        else if (menu_num == 3) {
            deleteMenu();
        }
        else if (menu_num == 4) {
            printMenu();
        }
        else if (menu_num == 0) {
            printf("\n");
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf("올바른 숫자를 입력하세요.\n");
            continue;
        }
        getchar();
    }
}
