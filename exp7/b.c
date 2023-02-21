#include<stdio.h>

struct marks {
    char name[20];
    int rollno;
    float chem_marks, maths_marks, phy_marks;
};

int main() {

    float per= 0;

    struct marks marks[5];

    for(int i = 0; i<5; i++) {

        printf("Student %d name: \n", i + 1);
        scanf("%s", &marks[i].name);

        printf("Student roll no: \n");
        scanf("%d", &marks[i].rollno);

        printf("Chemistry marks: \n");
        scanf("%f", &marks[i].chem_marks);

        printf("Maths marks: \n");
        scanf("%f", &marks[i].maths_marks);

        printf("Physics marks: \n");
        scanf("%f", &marks[i].phy_marks);
                
    }

    for(int i = 0; i<5; i++) {
        per = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
        printf("%s's percentage: %3.2f\n", marks[i].name,per);
    }

    return 0;
}