// 12S23002 - Fernando Silitonga
// 12S23017 - Andrey Jonathan


    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libs/dorm.h"
#include "libs/student.h"

int main(int _argc, char **_argv){
    struct dorm_t *dorms = malloc(100 * sizeof(struct dorm_t));
    struct student_t *students = malloc(100 * sizeof(struct student_t));
    char input[100];
    char id[12];
    char student_name[40];
    char year[5];
    char dorm_name[40];
    unsigned short capacity;
    char *token;
    int student_count = 0, dorm_count = 0;}

    while (true)
    {
        fflush(stdin);
        input[0] = '\0';
        int i = 0;
        char c = getchar();
        while (c != '\n' && c != EOF)
        {
            input[i] = c;
            i++;
            c = getchar();
        }
        input[i] = '\0';

        token = strtok(input, "#");
        if(strcmp(token, "---")==0){
            break;
        } else if (strcmp(token, "student-print-all")==0) {
            void (*print_fn)(struct student_t *_student, int count) = NULL;
            print_fn = print_student;
            print_fn(students, student_count);

        } else if (strcmp(token, "student-print-all-detail")==0) {
            void (*print_fn)(struct student_t *_student, int count) = NULL;
            print_fn = print_student_detail;
            print_fn(students, student_count);

        } else if (strcmp(token, "student-add")==0){
            token = strtok(NULL, "#");
            strcpy(id, token);
            token = strtok(NULL, "#");
            strcpy(student_name, token);
            token = strtok(NULL, "#");
            strcpy(year, token);
            token = strtok(NULL, "#");
            if (strcmp(token, "male")==0){
                struct student_t (*create_fn)(char *_id, char *_name, char *_year,enum gender_t _gender) = NULL;
                create_fn = create_student;
                students[student_count] = create_fn(id, student_name, year, GENDER_MALE);
            } else if (strcmp(token, "female")==0){
                struct student_t (*create_fn)(char *_id, char *_name, char *_year,enum gender_t _gender) = NULL;
                create_fn = create_student;
                students[student_count] = create_fn(id, student_name, year, GENDER_FEMALE);
            }
            student_count++;

        } else if (strcmp(token, "dorm-print-all")==0) {
            void (*print_fn)(struct dorm_t *_dorm, int count) = NULL;
            print_fn = print_dorm;
            print_fn(dorms, dorm_count);

        } else if (strcmp(token, "dorm-print-all-detail")==0) {
            void (*print_fn)(struct dorm_t *_dorm, int count) = NULL;
            print_fn = print_dorm_detail;
            print_fn(dorms, dorm_count);

        } else if (strcmp(token, "dorm-add")==0){
            token = strtok(NULL, "#");
            strcpy(dorm_name, token);
            token = strtok(NULL, "#");
            capacity = atoi(token);
            token = strtok(NULL, "#");
            if (strcmp(token, "male")==0){
                struct dorm_t (*create_fn)(char *_name, unsigned short _capacity, enum gender_t _gender) = NULL}}

    }