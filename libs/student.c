#include "student.h"

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */
 #include <stdlib.h>
 #include <string.h>
 #include <stdio.h>


 #define MAX_STUDENT[500]

 struct Student {
    char id [20];
    char name [20];
    int year ;
 }; 

 struct Student* create_student(const char*id, const char* name, int year){
    struct Student* student = (struct Student*) malloc( sizeof (struct Student));
    if(student == NULL) {
        exit (1);

    }
    strcpy (student->id, id);
    strcpy (student->name, name);
    student->year =year;
    return student ;

 }

void destroy.student(struct Student* student){
    free(student);

}

void print_student(struct Student* student) {
    printf( "%s\n", student->id);
    printf("%s\n", student->name);
    printf("%d\n", student->year);
    
}

int main () {
    struct Student* students [MAX_STUDENT];

    for (int i = 0; i < MAX_STUDENT; i++){
        students[i] =create_student(2021);
    }

    for (int i = 0 ; i <MAX_STUDENT; i++){
        printf ("%d\n", i+1);
        print_student(students[i]);

    }

    for (int i= 0 ; i< MAX_STUDENT ; i++){
        destroy_student(students[i]);

    }

    return 0 ;





 }
