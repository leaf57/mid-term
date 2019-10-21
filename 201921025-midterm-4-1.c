#include<stdio.h>
int main(){
  int i,num,j=1; //use b 7 ,watch j,r,c so I initialize j =1 and i<num -> i<=num 
  printf("Enter the number: ");
  scanf("%d",&num);

  for(i=1;i<=num;i++){
    j=j*i;
  }

  printf("The factorial of %d is %d\n",num,j);
}
