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
  struct Student student1;
  struct Student student2;

  strcpy(student1.first, "Collin");
  strcpy(student1.last, "Paiz");
  student1.age = 18;
  student1.studentid = 840618;

  printStudent(struct Student* student);

  return 0;
}
