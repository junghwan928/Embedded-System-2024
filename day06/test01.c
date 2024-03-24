#include <stdio.h>
#include <string.h>

#define MAX_ID_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

// 사용자 정보 구조체
struct User {
    char id[MAX_ID_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    char info[100]; // 예시로 정보를 100자 이내로 가정
};

// 사용자 정보를 저장한 파일에서 사용자 정보를 읽어오는 함수
void readUserInfoFromFile(char *id, char *password, struct User *user) {
    FILE *file = fopen("myinfo.txt", "r");
    if (file == NULL) {
        printf("사용자 정보 파일을 열 수 없습니다.\n");
        return;
    }

    while (fscanf(file, "%s %s %[^\n]", user->id, user->password, user->info) != EOF) {
        if (strcmp(user->id, id) == 0 && strcmp(user->password, password) == 0) {
            printf("사용자 정보:\n%s\n", user->info);
            fclose(file);
            return;
        }
    }

    printf("일치하는 사용자 정보를 찾을 수 없습니다.\n");
    fclose(file);
}

void main() {
    char input_id[MAX_ID_LENGTH];
    char input_password[MAX_PASSWORD_LENGTH];
    struct User user;

    printf("아이디를 입력하세요: ");
    scanf("%s", input_id);
    printf("비밀번호를 입력하세요: ");
    scanf("%s", input_password);

    readUserInfoFromFile(input_id, input_password, &user);
}
