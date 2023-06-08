#include <stdio.h>

// cau truc
struct student
{
    char name[20];
    int eng;
    int math;
    int phys;
    double mean;
};

// tinh diem 
char calc (double m) {
    if (m >= 90 && m <= 100)
    {
        return 'S';
    }
    else if (m >= 80 && m < 90)
    {
        return 'A';
    }
    else if (m >= 70 && m < 80)
    {
        return 'B';
    }
    else if (m >= 60 && m < 70)
    {
        return 'C';
    }
    else 
    {
        return 'D';
    }
}
int main () {
    int n; 
    printf("Enter number of student: ");
    scanf("%d", &n);
    struct student stu[n];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter name of the %d student: \n", i);
        scanf("%s", stu[i].name);
        printf("Enter mark of English: \n");
        scanf("%d", &stu[i].eng);
        printf("Enter mark of Math: \n");
        scanf("%d", &stu[i].math);
        printf("Enter mark of Physics: \n");
        scanf("%d", &stu[i].phys);
    }
    for (int i = 1; i <= n; i++)
    {
        stu[i].mean = (double)(stu[i].eng + stu[i].math + stu[i].phys) / 3;
        char grade = calc(stu[i].mean);
        printf("Name of the %d student: %s \n", i, stu[i].name);
        printf("Mark of English: %d\n", stu[i].eng);
        printf("Mark of Math: %d\n", stu[i].math);
        printf("Mark of Physics: %d\n", stu[i].phys);
        printf("Mean and Grade: %.2lf (%c)\n", stu[i].mean, grade);
    }
    return 0;
}
