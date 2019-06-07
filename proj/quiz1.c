#include "quiz1.h"

void printProblem(struct Problem* problem)
{
  printf("Question: %s\n", problem->question);
  printf("Answer: %d\n", problem->answer);
}
