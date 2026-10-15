#include <stdio.h>

int main(void) {
    int mark1, mark2, mark3;

    printf("Enter three marks: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    int total = mark1 + mark2 +mark3;
    double average = (double)total / 3 ;

    printf("Average: %.2f\n", average);
    return 0;
}
