#include <stdio.h>

int main() {
float marks;
int i;

for(i=1; i<= 1000; i++) {
    printf("\nStudent %d\n",i);
    printf("Enter marks:");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks!\n");
    }
    else if (marks >= 80) {
        printf("Grade: A+\n");
    }
    else if (marks >= 70) {
        printf("Grade: A\n");
    }
    else if (marks >= 60) {
        printf("Grade: A-\n");
    }
    else if (marks >= 50) {
        printf("Grade: B\n");
    }
    else if (marks >= 40) {
        printf("Grade: C\n");
    }
    else if (marks >= 33) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }
}

return 0;
}

