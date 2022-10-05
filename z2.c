#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
  int n=10, i=0, summa=0, big=0, avr=0, negative=0;
  int array[n];
  srand(time(NULL));
  for(i=0; i<n; i++){
    array[i]=rand()%15000-5000;
    avr=avr+array[i];
  }
  avr = avr/n;
  for(i=0; i<n; i++){
    if(array[i]>avr){
      big++;
  }
  if(array[i]<0 && negative==0){
      negative=1;
  }
    if(negative=1){
      summa=summa+fabs(array[i]);
  }
  printf("%d: %d\n", i, array[i]);
  }
  printf("Average number: %d\nNums above average number: %d\nSum after negative number: %d", avr, big, summa);
  return 0;
}
