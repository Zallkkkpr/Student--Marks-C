#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    char *subjects[5] = {"C Language", "HTML", "SQL", "Math", "English"};

    printf("=== BCA Student Marks Calculator ===\n\n");

    // Input lena
    for(int i = 0; i < 5; i++) {
        printf("%s ke marks dalo (0-100): ", subjects[i]);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    // Calculation
    percentage = total / 5.0;

    printf("\n---------- Result ----------\n");
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // Grade nikalna
    if(percentage >= 60) {
        printf("Grade: First Division - PASS\n");
    } else if(percentage >= 45) {
        printf("Grade: Second Division - PASS\n");
    } else if(percentage >= 33) {
        printf("Grade: Third Division - PASS\n");
    } else {
        printf("Grade: FAIL\n");
    }

    // Subject wise status
    printf("\nSubject wise status:\n");
    for(int i = 0; i < 5; i++) {
        if(marks[i] < 33) {
            printf("- %s : FAIL (%d)\n", subjects[i], marks[i]);
        } else {
            printf("- %s : PASS (%d)\n", subjects[i], marks[i]);
        }
    }

    return 0;
}
