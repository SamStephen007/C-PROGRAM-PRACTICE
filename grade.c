//program for find the grade
#include <stdio.h>

int main() {
    char grade;

    printf("Enter the grade: ");
    scanf("%c", &grade);

    switch(grade) {
        case 'E':
            printf("Excellent\n");
            break;
        case 'V':
            printf("Very Good\n");
            break;
        case 'G':
            printf("Good\n");
            break;
        case 'A':
            printf("Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}