#include <stdio.h>

int main() {
    int n;
    float ATT, HW, CT, MT, TF;
    const char* grade;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter marks for Student %d Attendance :", i);
        scanf("%f", &ATT);
        printf("Enter marks for Student %d Assignment :", i);
        scanf("%f", &HW);
        printf("Enter marks for Student %d Class Test :", i);
        scanf("%f", &CT);
        printf("Enter marks for Student %d Midterm :", i);
        scanf("%f", &MT);
        printf("Enter marks for Student %d Final :", i);
        scanf("%f", &TF);

        float totalMarks = ATT + HW + CT + MT + TF;

        if (totalMarks >= 90)
            grade = "A";
        else if (totalMarks >= 86)
            grade = "A-";
        else if (totalMarks >= 82)
            grade = "B+";
        else if (totalMarks >= 78)
            grade = "B";
        else if (totalMarks >= 74)
            grade = "B-";
        else if (totalMarks >= 70)
            grade = "C+";
        else if (totalMarks >= 66)
            grade = "C";
        else if (totalMarks >= 62)
            grade = "C-";
        else if (totalMarks >= 58)
            grade = "D+";
        else if (totalMarks >= 55)
            grade = "D";
        else
            grade = "F";

        // Print the result
        printf("Student %d: %s\n", i, grade);
    }

    return 0;
}
