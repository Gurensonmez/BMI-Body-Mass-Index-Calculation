#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
  double weight, height, BMI;
  printf("enter your weight in kg\n");
  scanf("%lf",&weight);
  printf("enter your height in meters\n");
  scanf("%lf",&height);
  BMI= weight/ (height*height);
  
  if (BMI < 18.5) {
  	printf("You are underweight.\n");
  }
  else if (BMI > 25) {
  	printf("You are overweight.\n");
  }
  else {
  	printf("You are normal weight.\n");
  }
  return 0;
}