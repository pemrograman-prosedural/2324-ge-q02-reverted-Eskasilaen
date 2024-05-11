#ifndef STUDENT_H
#define STUDENT_H

#include "gender.h"
#include "dorm.h"

struct student_t
{
  char id[12];
  char name[40];
  char year[5];
  enum gender_t gender;
  struct dorm_t *dorm;
  char assigned_dorm[20];
};

struct student_t create_student(char *input);

void print_student(struct student_t mhs);

void print_student_detail(struct student_t mhs);

void assign_student(struct dorm_t *dorms, struct student_t *mhs, char *nim, char *dorm, int std_count, int dorm_count, int find_id(char *nim, int std_count, struct student_t *mhs), int find_dorm(char *asrama, int dorm_count, struct dorm_t *dorms));

void unassign(struct student_t *mhs, struct dorm_t *dormitories);

int find_id(char *id, int std_count, struct student_t *mhs);

void move_student(struct dorm_t *dorms, struct student_t *mhs, char *nim, char *asrama, int std_count, int dorm_count, int find_id(char *nim, int std_count, struct student_t *mhs), int find_dorm(char *asrama, int dorm_count, struct dorm_t *dorms));

void dorm_empty(char *dorm, int std_count, int dorm_count, struct student_t *mhs, struct dorm_t *dorms, int find_dorm(char *dorm, int dorm_count, struct dorm_t *dorms));

#endif