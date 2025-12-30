#include <stdio.h>
#include <string.h>
int main (){
    int    a;
    float  b;
    char   c;
    double d;
    char   e[30];


    printf("your no. : ",a);
    scanf("%d",&a);

    printf("your gpa : ",b);
    scanf("%f", &b);

    printf("your grade : ",c);
    scanf(" %c", &c);

    printf("your attendence : ",d);
    scanf("%lf",&d);
    
    getchar();
    printf("your name :", e);
    fgets(e,sizeof(e),stdin );
    e[strlen(e)-1]='\0';

    printf("your name is : %s\n",e);
    printf("your no. is :%d\n",a);
    printf("your gpa is : %.2f\n",b);
    printf("your grade is: %c\n",c);
    printf("your attendence is : %.2lf\n",d);
    return 0 ;
}
