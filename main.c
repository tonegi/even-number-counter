#include <stdio.h>

int main(void) {
int v[15], i = 1, evenCounter = 0;
  
  for(; i <= 15; i++){
  printf("Enter a number for v[%d]: ",i);
    scanf("%d",&v[i]);
}    

  for(i = 1; i <= 15; i++){
    if(v[i] % 2 == 0){
      evenCounter++;
  }
}
  
  printf("The quantity of even numbers is: %d", evenCounter);
  
  return 0;
}
