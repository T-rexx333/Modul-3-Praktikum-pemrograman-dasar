#include<stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    if (grade >=80) {
        printf("A"); 
    } 
    else if ( grade >= 70) {
        printf("B");
    } 
    else if (grade >= 60) {
        printf("C");
    } 
    else if (grade >= 50) {
        printf("D");
    } 
    else {
        printf("E");
    }

return 0;
}