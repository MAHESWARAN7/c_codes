#include <stdio.h>




void pattern_inv(int n ){
    int str = n, sp=-1;
    for(int i =1; i<=n; i++){
        for(int j= 1; j<=str ; j++ ){
            printf("* ");
        }
        for(int j =1; j<=sp; j++){
            printf("  ");
        }
        if(i==1) str--;
        for(int j = 1; j<= str; j++){
            printf("* ");
        }if(i==1) str++;
        printf("\n");
        str-=1;
        sp+=2;
    }

}

void pattern(int n ){
    int str = 1, sp=n-1;
    for(int i =1; i<=n; i++){
        for(int j= 1; j<=sp ; j++ ){
            printf(" ");
        }
        for(int j =1; j<=str; j++){
            printf("*");
        }
        printf("\n");
        str++;
        sp--;
    }

}



void pattern_arr(int n){                            // upperbound & lower bound = use mid logic
    int mid= (1+n)/2, sp = mid, str =1;
    for(int i =0; i<=n; );
}

void pattern_mirr(int n){
    int mid = (1+n)/2, sp=0, str=n;
    for (int i = 1; i<=n; i++){
        for(int j =1; j<= sp; j++){
            printf("  ");
        }
        for(int j = 1; j <= str; j++){
            printf("* ");
        }
        printf("\n");
        if(i<mid) {
            sp++;
            str-=2;
        }
        else{
            sp--;
            str += 2;
        }
    }
}

void pattern_sq(int n ){
    int mid = (1+n)/2, sp=mid-1, str=1;
    for(int i = 1; i<=n; i++) {
        for(int j=1; j<=sp; j++){
            printf("  ");
        }
        
        for(int j= 1; j<=str; j++){
            printf("* ");
        }
        printf("\n");
        if(i<mid){
            sp-=1;
            str+=2;
        }
        else {
            sp+=1;
            str-=2;
        }

    }
}



void pattern_s(int n ){
    int mid = (1+n)/2, sp=1, str=mid;
    for(int i = 1; i<=n; i++) {
        for(int j=1; j<=str; j++){
            printf("* ");
        }
        for(int j = 1; j <= sp; j++){
            printf("  ");
        }
        for(int j = 1; j<= str; j++ ){
            printf("* ");
        }
        printf("\n");
        
        if(i<mid){
            sp+=2;
            str--;
        }
        else {
            sp-=2;
            str++;
        }

    }
}


void pattern_square (int n ){
    int mid = (1+n)/2, str=1, sp=mid-1;
    for(int i = 1; i<=n; i++) {
        for(int j=1;j<=sp; j++){
           printf("  ");
        }
        
        for(int j = 1; j<= str; j++ ){
            if(j==1||j==str)
           {printf("* ");} 
           else {printf("  ");}
        }
        printf("\n");
        
        if(i<mid){
            sp--;
            str+=2;
        }
        else {
            sp++;
            str-=2;
        }

    }
}
 
void square(int n){                            
    int mid = (1+n)/2;
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(n==i || i==1 || j==n || j==1) printf("* ");
            else printf("  ");
        }
        printf("\n");

    }
}

void dia(int n){                            
    int mid = (1+n)/2;
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if((i+j)==n+1 ) printf("* ");
            else printf("  ");
        }
        printf("\n");

    }
}

void M(int n){                            
    int mid = (1+n)/2;
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(((i==j && i<=mid)) || ((i+j)==n+1 && j >= mid) )  printf("* ");//e
            else if (j==1 || j==n) printf("* ");
            else printf("  ");
        }
        printf("\n");

    }
}

void W(int n){                            
    int mid = (1+n)/2;
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(((i==j && i>=mid)) || ((i+j)==n+1 && j <= mid) )  printf("* ");//e
            else if (j==1 || j==n) printf("* ");
            else printf("  ");
        }
        printf("\n");

    }
}


void hitler(int n){                            
    int mid = (1+n)/2;
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(((i==1 && j>= mid)) || (j==1 && i<=mid) || (i==n && j<=mid) || (j==n && i>=mid) )  printf("* ");//e
            else if (i==mid || j==mid) printf("* ");
            else printf("  ");
        } 
        printf("\n");

    }
}


void patt(int n){                            
    int mid = (1+n)/2;
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if((i==1 && j<= mid) || (i==n && j>=mid) || (j==1 && i<=mid) || (j==n && i>=mid) || ((i+j)==mid+1) || ((i+j)==mid+n))   printf("* ");
            else if (i==mid || j==mid || i==j) printf("* ");
            else printf("  ");
        } 
        printf("\n");

    }
}


void hut(int n){                            
    int mid = (1+n)/2;
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            
            if((j==1 && i>=mid) || (j==n && i>=mid) || ((i+j)==mid+1) || ((j-i)==mid-1))   printf("* ");//e
            else if (i==mid || i==1 || i==n ) printf("* ");
            else printf("  ");
        } 
        printf("\n");

    }
}

void hutt(int n ){

    int mid = (n+1)/2, upper_mid = (mid+1)/2 , lower_mid = (mid+n)/2;
    for(int i = 1; i<=n ; i++){
        for(int j=1; j<=n; j++){
            
            if((i+j==mid+1) || (j-i==mid-1) || (i==j&& upper_mid >= i) || ((i+j==n+1) && (i<upper_mid))   )printf("* ");
            else if((i-j==mid-1)&&(i<=lower_mid) || (i+j==n+1)&&(lower_mid<=i)) printf("* ");
            else if((i+j==mid+n)&&(i<=lower_mid) || (i==j&&lower_mid<=i))printf("* ");
            else if((j==1 && i>=mid) || (j==n && i>=mid) ) printf("* ");
            else if ( (i==1 || i==mid || i==n) ) printf("* ");
            else printf("  ");
        }

        printf("\n");
    }

}


void hakenkruez(int n){
    n=13;
    int mid=(n+1)/2, upper_mid=(mid+1)/2 , lower_mid=(mid+n)/2;
    for(int i = 1; i<=n ; i++){
        for(int j=1; j<=n; j++){
            if( (i == mid || j==mid))printf("* ");
            else if((i+j==mid+1) || (i==j && i>=lower_mid) || (i==j && i<=upper_mid) || (i+j==mid+n)) printf("* ");
            else if((i+j==n+1)&&(lower_mid<=i) || (i+j==n+1)&&(upper_mid>=i))printf("* ");
            else if(  (  j<= upper_mid && i==lower_mid ) || (  i<= upper_mid && j==lower_mid ))printf("* ");
            else if(  (  j>= lower_mid && i==upper_mid || (  i>= lower_mid && j==upper_mid )) )printf("* ");
            
            
           
            else printf("  ");
        }
        printf("\n");
    }
}


int main(){
    int n ;
    //scanf("%d",&n);

    //pattern_arr(n);

    // pattern_s(n);
   
    // pattern_square(n);

    // pattern_sq(n);

    // pattern_mirr(n);

    // pattern_inv(n);
    // square(n);
    // dia(n);
    // M(n);
    // W(n);
    // hitler(n);
    // patt(n);
     hakenkruez(n);
    
}