#include<stdio.h>
int main(){
  int i=1;
  int *pi = &i;
  for(;i<=1000;(*pi)++){
    printf("%4d ",i);
    if(i%10 ==0){
      printf("\n");
    }
   
  }
  return 0;
}

