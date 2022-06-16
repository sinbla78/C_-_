#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int nan, nan1;
    int random = rand() % 100;
    int num = 0;
    printf("0~99까지의 숫자 중 알맞는 수 맞추기 v.1.01 made by HuiBeom\n--------------------------------------------\n");
    printf("난이도 설정\n");
    printf("1.하수(기회 10번)\n");
    printf("2.중수(기회 7번)\n");
    printf("3.고수(기회 5번)\n");
    printf("4.초고수(기회 3번)\n");
    printf("5.신(기회 1번)\n");
    printf("숫자를 입력해주세요. : \n");
    scanf_s("%d", &nan);
    while (1) {
        if (nan == 1) {
            nan1 = 10;
            break;
        }
        else if (nan == 2) {
            nan1 = 7;
            break;
        }
        else if (nan == 3) {
            nan1 = 5;
            break;
        }
        else if (nan == 4) {
            nan1 = 3;
            break;
        }
        else if (nan == 5) {
            nan1 = 1;
            break;
        }
        else {
            printf("알맞은 난이도의 숫자를 입력해 주세요\n");
        }
    }
    printf("--------------------------------------------\n");
    for (int i = 0; i < nan1; i++) {
        scanf_s("%d", &num);
        if (num > random) {

            if (num > 99) {
                printf("입력한 수가 범위를 넘었습니다\n게임을 종료합니다");
                break;
            }
            printf("입력한 수보다 작음 (Down)\n");
        }
        else if (num < random) {
            printf("입력한 수보다 더 큼 (Up)\n");
        }
        else {
            printf("맞았습니다!");
            break;
        }
    }
    return 0;
}
