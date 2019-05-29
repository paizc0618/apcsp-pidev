#include <stdio.h>
#include <string.h>

struct Student
{
  char first[50];
  char last[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("Name: %s %s\n", student->first, student->last);
  printf("Age: %d\n", student->age);
  printf("StudentID: %d\n", student->studentid);
}

int main()
{

  char input[256];
  struct Student student1;
  struct Student student2;

  strcpy(student1.first, "Collin");
  strcpy(student1.last, "Paiz");
  student1.age = 18;
  student1.studentid = 840618;#include <stdio.h>
#include <string.h>

struct Student
{
  char first[50];
  char last[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("Name: %s %s\n", student->first, student->last);
  printf("Age: %d\n", student->age);
  printf("StudentID: %d\n", student->studentid);
}

int main()
{

  char input[256];
  struct Student student1;
  struct Student student2;

  strcpy(student1.first, "Collin");
  strcpy(student1.last, "Paiz");
  student1.age = 18;
  student1.studentid = 840618;

  printf("What is your first name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", student2.first);

  printf("What is your last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", student2.last);

  printf("What is your age?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%d", &student2.age);

  printf("What is your StudentID?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%d", &student2.studentid);

  printStudent(&student1);
  printStudent(&student2);


  return 0;
}
