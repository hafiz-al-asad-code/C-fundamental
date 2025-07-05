#include<stdio.h>
#include<string.h>

int errorCode = 0;

int add(int num1, int num2){
  int sum = num1 + num2;
  return sum;
};

int subtract(int num1, int num2){
  int sub = num1 - num2;
  return sub;
};

int multiplication(int num1, int num2){
  int mul = num1 * num2;
  return mul;
};

int divide(int num1, int num2){
  if(num2==0)
  {
    errorCode = 1;
    return 0;
  }
  int div = num1/num2;
  return div;
};

int calculator(int number1, int number2, char operation[]){

  errorCode = 0;

  if(strcmp(operation, "add")==0 || strcmp(operation, "+")==0)
  {
    int result = add(number1, number2);
    return result;
  }

  else if(strcmp(operation, "subtract")==0 || strcmp(operation, "-")==0)
  {
    int result = subtract(number1, number2);
    return result;
  }

  else if(strcmp(operation, "multiplication")==0 || strcmp(operation, "*")==0)
  {
    int result = multiplication(number1, number2);
    return result;
  }

  else if(strcmp(operation, "divide")==0 || strcmp(operation, "/")==0)
  {
    int result = divide(number1, number2);
    return result;
  }
  else{
    errorCode = 2;
    return 0;
  }
};

int main()
{
  int result = calculator(7, 7, "/");

  if(errorCode == 1)
  {
    printf("The result is = infinity");
  }
  else if(errorCode ==2)
  {
    printf("Only 'Add', 'Subtract', 'Multiplication' and 'Divide' functions are available.\n Please type among these functions.");
  }
  else{
    printf("The result is = %d", result);
  }
}