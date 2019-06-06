#include <stdio.h>

float areaOfCircle(float r) {
  float a = 3.14 * r * r;
  return a;
}

int main(int argc, char* argv[]){
  float arg1;
  int found = sscanf(argv[1], "%f", &arg1);
  if (argc == 3){

  if (found != 1){
    printf("First arg is not a number\n");
    return 1;
  }

  float arg2;
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1){
    printf("second arg is not a number\n");
    return 1;
  }
    for (float r = arg1; r <= arg2; r++){
      float area = areaOfCircle(r);
      printf("Radius = %f - Area: %f\n", r, area);
    }
    }else{
  float l;
  float u;
  int c = 1;

  for (float r = l; r <= u; r++){
    float area = areaOfCircle(r);
    printf("Radius = %f - Area: %f\n", r, area);
  }
}
}
