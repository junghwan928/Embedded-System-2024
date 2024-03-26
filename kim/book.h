#ifndef BOOK_H
#define BOOK_H

typedef struct BOOK {
    char title[30];
    char author[30];
    char publisher[30];
    int price;
    int rent_available;
    struct BOOK* next;
} book;

book* head;

void post_addMenu();
void printMenu();
void deleteMenu();
void searchMenu();
void rentMenu();

#endif
