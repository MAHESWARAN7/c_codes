
#include <stdio.h>
int main(){
    char o = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

printf("enter first num : ");
scanf("%lf", &num1);

printf("enter operator (+,-,/,*): ");
scanf(" %c", &o);

printf("enter second num : ");
scanf("%lf", &num2 );

switch(o){
    case '+':
    result=num1+num2;
    break;
    case '-':
    result = num1 - num2;
    break;
    case '*':
    result = num1 * num2;
    break;
    case '/':
    if(num2==0){
    printf("cant divide by 0 ", result);
                                      }
    else{
        result = num1 / num2;
    } 
    break;
    default:
    printf("invalid operator");

}
if(num2 == 0){
printf(" ", result);}
else {
    printf("num2 is 0",result);
}

  

}
