#include <stdio.h>
#include <string.h>

struct Problem
{
  char question[256];
  int answer;
};

void printProblem(struct Problem* problem)
{
  printf("Question: %s\n", problem->question);
  printf("Answer: %d\n", problem->answer);
}

int main(int argc, char* argv[])
{
  //identify problem1
  struct Problem problem1;
  strcpy(problem1.question, "0+1");
  problem1.answer = 1;
  
  //check input
  int arg1;

  if (argc == 2)
  {
    int found = sscanf(argv[1], "%d", &arg1);

    if (found != 1)
    {
      printf("First arg is not an integer\n");
      return 1;
    }   
    for (int a = arg1; a <= arg1; a++)
    {
      printf("Your Answer: %d\n", a);
    }
    if (arg1 == problem1.answer)
    {
      printf("Correct\n");
    }
    else
    {
      printf("Incorrect\n");
    }
  }

  //print question and answer
  printProblem(&problem1);
}
