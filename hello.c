
#include <stdio.h>

void main() {
    char name[50];
    int rollno, m1, m2, m3, m4, tot_marks;
    float tot_percentage;


    printf("\n Enter student name: "); 
    scanf("%s", name); 
    printf("\n Enter student roll.no: "); 
    scanf("%d", &rollno); 
    printf("\n Enter sub1 marks: "); 
    scanf("%d", &m1); 
    printf("\n Enter sub2 marks: "); 
    scanf("%d", &m2);
    printf("\n Enter sub3 marks: "); 
    scanf("%d", &m3);
    printf("\n Enter sub4 marks: "); 
    scanf("%d", &m4);
    tot_marks = m1 + m2 + m3 + m4;
    tot_percentage = (tot_marks / 400.0) * 100; 
    printf("\n Student Details:\n");
    printf("Name: %s\n", name); 
    printf("Roll.No: %d\n", rollno); 
    printf("Percentage Scored: %.2f%%\n", tot_percentage); 
    getchar(); 
}

