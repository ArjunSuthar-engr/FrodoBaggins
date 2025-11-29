#include<stdio.h>
#include<stdlib.h>

typedef struct
{
  int age;
  char first_name;
  char last_name;
} Student;

void age_plus(Student *s);

int main() {
  Student *s1;

  s1 = calloc(1, sizeof(Student));
  // (*s1).age = 20;
  // another syntax, the arrow says: at the block of memory pointing to by the memory address of s1 go get the age member variable in the block of memory(and we're going to set it to 20).
  s1->age = 20;

  // printf("%d\n", (*s1).age);
  printf("%d\n", s1->age);
  
  age_plus(s1);
  printf("%d\n", s1->age);

  free(s1);

  return 0;
}

void age_plus(Student *s) {
  s->age += 1;
}