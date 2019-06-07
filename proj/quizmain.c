#include <stdio.h>
#include "quiz1.h"

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
  int arg1;

  if (argc == 4)
  {
    int found = sscanf(argv[1], "%d", &arg1);
    if (found != 1)
    {
      printf("First arg is not an integer\n");
      return 1;
    }   
    if (arg1 == problem1.answer)
    {
      printf("Correct\n");
    }
    else
    {
      printf("Incorrect\n");
    }



    int arg2;
    found = sscanf(argv[2], "%d", &arg2);
    if (found != 1)
    {
      printf("Second arg is not an integer\n");
      return 1;
    }
    if (arg2 == problem2.answer)
    {
      printf("Correct\n");
    }
    else
    {
      printf("Incorrect\n");
    }



    int arg3;
    found = sscanf(argv[3], "%d", &arg3);
    if (found != 1)
    {
      printf("Third arg is not an integer\n");
      return 1;
    }
    if (arg3 == problem3.answer)
    {
      printf("Correct\n");
    }
    else
    {
      printf("Incorrect\n");
    }



    for (int i = 1; i <= 3; i++)
    {
      printf("Your Answer: %s\n", argv[i]);
    }

    int ans[256];
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 3;
    for(int x = 1; x <= 3; x++)
    {
      printf("The answer to question %d is %d\n", x, ans[x]);
    }
  }

  //print question and answer
  printProblem(&problem1);
  printProblem(&problem2);
  printProblem(&problem3);
}
