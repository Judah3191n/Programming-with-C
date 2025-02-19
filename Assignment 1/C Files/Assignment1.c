#include <stdio.h>
#include <stdbool.h>
int main(){
    int numStudentsProcessed=0;
    double averageOfAverageGrades=0;
    
    int continueGrading;
    do {
        //Grabs the name
        char studentName[30];
        printf("Enter a student's name: ");
        scanf("%s", studentName);

        //Grabs the 3 grades
        int grade = 0;
        double totalGrade = 0;
        //Grade 1
        //Do-While to asks for the grade again if input is invalid
        do{
            //if() checks if the grade is valid before giving error message
            if ((grade < 0)||(grade > 100)){
                printf("\nInvalid grade! Please enter a value between 0 and 100\n");
            }

            printf("Enter grade for Subject 1: ");
            scanf("%d", &grade);
        }while((grade < 0)||(grade > 100));
        totalGrade += grade;

        //Grade 2
        do{
            if ((grade < 0)||(grade > 100)){
                printf("\nInvalid grade! Please enter a value between 0 and 100\n");
            }
            printf("Enter grade for Subject 2: ");
            scanf("%d", &grade);
        }while((grade < 0)||(grade > 100));
        totalGrade += grade;

        //Grade 3
        do{
            if ((grade < 0)||(grade > 100)){
                printf("\nInvalid grade! Please enter a value between 0 and 100\n");
            }

            printf("Enter grade for Subject 3: ");
            scanf("%d", &grade);
        }while((grade < 0)||(grade > 100));
        totalGrade += grade;

        
        //Prints out the results
        printf("\nResults for %s:\n", studentName);
        printf("Total Marks: %.2lf\n", totalGrade);
        printf("Average Marks: %.2lf\n", (double)(totalGrade/3));
        //Student passes or fails
        bool studentPass;
        if((double)(totalGrade/3)>=50){
            studentPass = true;
            printf("Status: Pass");
        }else{
            studentPass = false;
            printf("Status: Fail");
        }

        //add 1 to number of students processed
        numStudentsProcessed++;
        //addes the average grade of this student to the total average of all students
        averageOfAverageGrades += (double)(totalGrade/3);


        //Option to process another student
        
        printf("\n\nDo you want to enter details for another student? (1 for Yes, 0 for No): ");
        scanf("%d", &continueGrading);

    }while(continueGrading==1);

    //prints out number of students processed and class average
    printf("\nNumber of students processed: %d\n",numStudentsProcessed);
    printf("Class Average: %.2lf\n", averageOfAverageGrades/numStudentsProcessed);
    return 0;
}