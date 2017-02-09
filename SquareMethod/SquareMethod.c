#include <stdio.h>
int square( int y);
int main(){


int x;




//printf("Enter value of y here: ");
//scanf("%d Enter value of y  :", y);

for(x=1;x<=10;x++){
printf(" %d \n ", square(x));
}
return 0;
}

int square(int y){
return y * y;

}