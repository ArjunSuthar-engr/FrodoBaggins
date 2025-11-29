#include<stdio.h>
#include<string.h>

typedef struct {
  char first_name[50];
  char last_name[50];
  int age;
}Student;

// What happens when pass in a struct in the function?
//   These values basically gets duplicated on the stack in memory

// This may be slow for large amount of data, we can use the Dynamically Allocated Memory. How will this help? let's see in 5usingDAMn.c

// THE FACINATING BTS OF MEMEORY
// Variables       Address   Value
// s1.age          5         30
//   .first_name   6-56      "Raj"
//   .last_name    57-107    "Kumar"
// s1.age          108       30
//   .first_name   109-159   "Raj"
//   .last_name    160-110   "Kumar"


// this is going to expect an type student
void print_student(Student s); // Keeping this below the typedef so that the type student is defined before i use it.

int main() {
  // I have a Student s1 that has members age, first_name and last_name
  Student s1;
  s1.age = 30;

  // In C, arrays are not assignable after declaration.
  // s1.first_name = "Arjun"; //INVALID

  // Walk through "Raj" character by character. Whatever you see, copy it into first_name. Stop only when you hit the null terminator
  strcpy(s1.first_name, "Raj");
  strcpy(s1.last_name, "Kumar");

  print_student(s1);

  printf("%d\n", s1.age); //30, didn't get modified
  printf("%s\n", s1.first_name); //Raj, didn't get modified

  return 0;
}

// is it pass by value or refrence? let's test
// structs are pass by value
void print_student(Student s) {
  printf("%s %s\n", s.first_name, s.last_name);
  printf("Age: %d\n", s.age);
  // test
  s.age = 25;
  s.first_name[0] = 'K';
}