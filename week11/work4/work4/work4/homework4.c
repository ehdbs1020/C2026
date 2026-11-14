#include <stdio.h>

void to_hms(int total, int* h, int* m, int* s) {
    *h = total / 3600;
    *m = (total % 3600) / 60;
    *s = total % 60;
}

int main(void) {
    int total_sec;
    int hours, minutes, seconds;

    printf("총 시간(초)을 입력하시오 : ");
    if (scanf_s("%d", &total_sec) != 1) {
        return 1;
    }

    to_hms(total_sec, &hours, &minutes, &seconds);
    printf("%d시간 %d분 %d초\n", hours, minutes, seconds);

    return 0;
}