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

  //identify problem2
  struct Problem problem2;
  strcpy(problem2.question, "0+2");
  problem2.answer = 2;

  //identify problem3
  struct Problem problem3;
  strcpy(problem3.question, "0+3");
  problem3.answer = 3;
  
  //check input
  float arg1;
  int found = sscanf(argv[1], "%f", &arg1);

  if (argc == 4)
  {
    if (found != 1)
    {
      printf("First arg is not a number\n");
      return 1;
    }   
    float arg2;
    found = sscanf(argv[2], "%f", &arg2);
    if (found != 1)
    {
      printf("second arg is not a number\n");
      return 1;
    }
    float arg3;
    found = sscanf(argv[3], "%f", &arg3);
    if (found != 1)
    {
      printf("third arg is not a number\n");
      return 1;
    }
    for (float a = arg1; a <= arg3; a++)
    {
      printf("Your Answer: %f\n", a);
    }
  }

  //print question and answer
  printProblem(&problem1);
  printProblem(&problem2);
  printProblem(&problem3);

  if(argv[1] == problem1.question)
  {
    printf("Correct\n");
  }
  else
  {
    printf("Incorrect\n");
  }

  if(argv[2] == problem2.question)
  {
    printf("Correct\n");
  }
  else
  {
    printf("Incorrect\n");
  }

  if(argv[3] == problem3.question)
  {
    printf("Correct\n");
  }
  else
  {
    printf("Incorrect\n");
  }
}
