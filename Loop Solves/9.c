#include<stdio.h>

void calculateGrade(int attendance, int assignment, int classTest, int midterm, int finalExam) {

    float totalMarks = (attendance * 0.05) + (assignment * 0.10) + (classTest * 0.15) + (midterm * 0.30) + (finalExam * 0.40);

    if (totalMarks >= 90) {
        printf("Grade: A\n");
    } else if (totalMarks >= 86) {
        printf("Grade: A-\n");
    } else if (totalMarks >= 82) {
        printf("Grade: B+\n");
    } else if (totalMarks >= 78) {
        printf("Grade: B\n");
    } else if (totalMarks >= 74) {
        printf("Grade: B-\n");
    } else if (totalMarks >= 70) {
        printf("Grade: C+\n");
    } else if (totalMarks >= 66) {
        printf("Grade: C\n");
    } else if (totalMarks >= 62) {
        printf("Grade: C-\n");
    } else if (totalMarks >= 58) {
        printf("Grade: D+\n");
    } else if (totalMarks >= 55) {
        printf("Grade: D\n");
    }     
    else (totalMArks <=39 {
    printf("Grade: F\n");
    }
}

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int attendance, assignment, classTest, midterm, finalExam;

        printf("\nEnter marks for Student %d\n", i+1);
        printf("Attendance (out of 5): ");
        scanf("%d", &attendance);
        printf("Assignments (out of 10): ");
        scanf("%d", &assignment);
        printf("Class Test (out of 15): ");
        scanf("%d", &classTest);
        printf("Midterm (out of 50): ");
        scanf("%d", &midterm);
        printf("Final Exam (out of 100): ");
        scanf("%d", &finalExam);

        calculateGrade(attendance, assignment, classTest, midterm, finalExam);
    }
return 0;
}
