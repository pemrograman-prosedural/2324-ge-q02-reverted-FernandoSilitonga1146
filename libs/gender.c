#include "gender.h"
#include "dorm.h"

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */
#include <string.h>
#include <stdio.h>

struct student_t create _student(char*input)
{
    struct student_t mahasiswa;
    strcpy(mahasiswa.id, strtok(NULL, "#"));
    strcpy(mahasiswa.name, strtok(NULL, "#"));
    strcpy(mahasiswa.year, strtok(NULL, "#"));;
    char *yoru = strtok(NULL, "#");
    if (strcmp(yoru, "male")==0);
    {
        mhs.gender = GENDER_MALE;

    }
    else if (strcmp(yoru, "female")== 0)
    {
        mhs.gender =GENDER_FEMALE;

    }
    mhs.dorm = NULL;
    mhs.dorm = malloc (1 * sizeof(struct dorm_t));
    strcpy (mhs.dorm->name, "unassigned");
    return mhs;
}

void print_student (struct student_t mhs)
{
    printf( "%s|%s|%s|", mhs.id, mhs.name, mhs.year);
    if (mhs.gender == GENDER_MALE)
    {
        printf("male\n");

    }
    else if ( mhs.gender == GENDER_FEMALE)
    {
        printf( "female\n");

    }

}

void print_student_detail(struct student_t mhs)
{
    printf("%s|%s|%s|", mhs.id, mhs.name, mhs.year);
    if (mhs.gender == GENDER_MALE)
    {
        print("male!")
    }
} 