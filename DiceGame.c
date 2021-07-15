#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
int i,j;
char name[10];



srand(time(NULL));

i = rand() %6 +1;
j = rand() %6 +1;


printf("What is your name?\n");
scanf("%s", name);
printf("Hello, %s!\n", name);

printf("Rolling the dice...\n");
printf("Die 1: %d\n", i);
printf("Die 2: %d\n", j);
printf("Total value: %d\n", i+j);

if((i+j) > 7){
  printf("%s is won!\n", name);

}
else printf("%s is lost!\n", name);

return 0;





}
