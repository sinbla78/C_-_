//rand 함수

```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int computer, trash;
    int play = 1;
    int cnt = 0;
    int c;
    do {
    srand(time(NULL));
    computer = rand() % 100 + 1; //1에서 100사이의 난수 생성
    int count = rand() % 10 + 1;
while (play == 1)
    {
    printf("<<<<<1~100사이의 수를 입력해 주세요>>>>>\n");
    printf("===============UP & Down===============\n\n");
    scanf_s("%d", &trash);
while (trash > 100 || trash < 1)
    {
            printf("\n잘못된 입력입니다.\\n<<<다시 입력 해주세요>>>\\n");
            scanf_s("%d", &trash);
        } //조건에 맞지않는 입력일 경우 다시 입력하게 함.
        printf("남은 횟수 : <%d번>\n", count);
        if (trash <= 100 && trash >= 1)
        {
            if (computer == trash)
            {
                count--;  //남은 횟수 count
                cnt++;//시도 횟수 count
                printf("%정답입니다!!\\n%d번째에 맞추셨습니다.", cnt);
                break;

            }
            else if (count == 0)
            {
                printf("패배!!! 답 :<%d>\n", computer);
                break;

            }
            if (trash > computer)
            {
                printf("Down!!\n");
                count--; //남은 횟수 카운트
                cnt++;//시도 횟수 카운트
            }
            else if (trash < computer)
            {
                printf("UP!!\n");
                count--; //남은 횟수 카운트
                cnt++; //시도 횟수 카운트
            }
        }

    }
  } while (1);
}
```
