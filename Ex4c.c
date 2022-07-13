#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int num,T=0,H=0;
  char name[100];
  printf("Who are you?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Tossing a coin...\n");
  for(int i = 1;i <= 3; i++){
    srand(time(NULL));
    num = rand();
    printf("Round %d: ",i);
    if(num%2 == 0){
      printf("Heads\n");
      H++;
    }
    else{
      printf("Tails\n");
      T++;
    }
  }
  printf("Heads: %d, Tails: %d\n",H,T);
  if(H > T) printf("You won!\n");
  else printf("You lost!\n");   
  return 0;
}
