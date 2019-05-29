#include <stdio.h>
#include <string.h>

void printStudent(struct Student* student)
{
  printf("Name: %s %s\n", student->first, student->last);
  printf("Age: %d\n", student->age);
  printf("StudentID: %d\n", student->studentid);
}
