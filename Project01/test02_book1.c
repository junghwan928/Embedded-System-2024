#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
    struct Book *next;
};

struct Book *head = NULL;

void addBook() {
    struct Book *newBook = (struct Book *)malloc(sizeof(struct Book));
    if (newBook == NULL) {
        printf("메모리 할당 오류\n");
        return;
    }

    printf("도서 제목: ");
    scanf("%s", newBook->title);
    printf("저자: ");
    scanf("%s", newBook->author);
    printf("출판년도: ");
    scanf("%d", &newBook->year);

    newBook->next = head;
    head = newBook;
}

void searchBook() {
    char title[100];
    printf("검색할 도서 제목: ");
    scanf("%s", title);

    struct Book *current = head;
    while (current != NULL) {
        if (strcmp(current->title, title) == 0) {
            printf("도서가 존재합니다.\n");
            return;
        }
        current = current->next;
    }
    printf("도서가 존재하지 않습니다.\n");
}

void deleteBook() {
    char title[100];
    printf("삭제할 도서 제목: ");
    scanf("%s", title);

    struct Book *prev = NULL;
    struct Book *current = head;
    while (current != NULL) {
        if (strcmp(current->title, title) == 0) {
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            printf("도서를 삭제했습니다.\n");
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("해당 도서를 찾을 수 없습니다.\n");
}

void printBooks() {
    printf("도서 목록:\n");
    struct Book *current = head;
    while (current != NULL) {
        printf("%s (%s, %d)\n", current->title, current->author, current->year);
        current = current->next;
    }
}

void menu() {
    int choice;
    do {
        printf("\n**** 메뉴 ****\n");
        printf("1 도서구입\n");
        printf("2 도서검색\n");
        printf("3 도서삭제\n");
        printf("4 도서출력\n");
        printf("0 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                deleteBook();
                break;
            case 4:
                printBooks();
                break;
            case 0:
                printf("프로그램을 종료합니다.\n");
                break;
            default:
                printf("잘못된 선택입니다. 다시 선택해주세요.\n");
        }
    } while (choice != 0);
}

void main() {
    menu();
}
