 #include <stdio.h>
 #include <string.h>
void rev_digits (int n){
    int div = 1;
    while (div <= n){
        int  ld = (n%(div*10))/div;
        printf("%d", ld);
        div =div *10 ;

    }
}

 int main (){
//     char name[90]="";
//     printf("enter ur name : ");
//     fgets(name,sizeof(name),stdin);
//     name[strlen(name)-1]= '\0';
    
//     while(strlen(name)==0){
//         printf("enter your name : ");
//        fgets(name,sizeof(name),stdin);
//        name[strlen(name)-1]= '\0';

//     }
//     printf("hello %s ", name);

// }

int n ;
scanf("%d", &n);
rev_digits (n);

return 0;
}

// int sumOfDigits(int n) {
//     int sum =0, div = 1 ; 
//     while(div <= n){
//         int ld = (n%(div*10))/div;
       
//         sum = sum +ld ;
//         div=div*10;
//     }
//     return sum;
    
// }