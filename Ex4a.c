#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int num,T=0,H=0;
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
  return 0;
}
