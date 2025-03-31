#include<stdio.h>
#include<string.h>

float averageGrade(float array[],int size){
    float average = 0;
    int i = 0;
    for (i=0;i<size;i++){
        average+=array[i];
    }
    return average/i;
}


void bubbleSort(char names[][100],int numberOfContacts){
    char temp[100];

    for (int i=0;i<numberOfContacts-1;i++){//it is numberOfContacts -1 because we know the last one will be sorted if everything else is sorted 
        for(int j=0;j<numberOfContacts-1;j++){
            if(strcmp(names[j],names[j+1])>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
}

int main(){
    //Task 1 - Student Grade Tracker
    printf("---------------Task 1---------------\n");
    float listOfGrades[5];
    int numberOfGrades = sizeof(listOfGrades)/sizeof(listOfGrades[0]);
    float highestGrade = 0;//starts at 0 to make sure there is a highest grade
    float lowestGrade = 100;//starts at 100 to make sure there is a lowest grade

    printf("Enter a value to store in an array: ");
    for (int i=0;i<numberOfGrades;i++){
        scanf("%f,",&(listOfGrades[i]));

        //2 if-statements instead of an if-else to makes sure there is both a highest and lowest grade even if all the grades are the same
        if(listOfGrades[i]>highestGrade){//finds highest and lowest grade while being inputed so no sotring algorithm is needed
            highestGrade = listOfGrades[i];
        }
        if(listOfGrades[i]<lowestGrade){
            lowestGrade = listOfGrades[i];
        }
    }

    //prints out the grades
    for (int i=0;i<numberOfGrades;i++){
        printf("%.2f, ",listOfGrades[i]);
    }
  
    printf("\n\nAverage Grade: %.2f\n",averageGrade(listOfGrades,numberOfGrades));\
    printf("Highest Grade: %.2f\n",highestGrade);
    printf("Lowest Grade: %.2f\n",lowestGrade);


    
    //Task 2 - Contact List Organizer
    printf("\n\n---------------Task 2---------------\n");
    char listOfNames[5][100];
    int numberOfContats = sizeof(listOfNames)/sizeof(listOfNames[0]);//size of the listOfNames array

    printf("Enter 5 names:\n");//ask user to input the 5 names
    for (int i=0;i<numberOfContats;i++){
        printf("Name %d: ", i + 1);
        scanf("%99s", listOfNames[i]);
    }

    bubbleSort(listOfNames,numberOfContats);//calls the bubble sort function to sort the list of names
    
    printf("\nSorted names:\n");//prints out the sorted names
    for (int i=0;i<numberOfContats;i++){
        printf("Name %d:",i+1);
        printf("%s\n",listOfNames[i]);
    }
    

    return 1;
}

