#include<stdio.h>

void swap(int *pa, int *pb);

int main(){
  int in1,in2;
  int *pi1 = &in1;
  int *pi2 = &in2;
  int temp =0;
  scanf("%d %d",&in1,&in2);
  printf("in1 = %d in2 = %d \n",in1,in2);
  swap(pi1,pi2);
  printf("in1 = %d in2 = %d \n",in1,in2);
  return 0;
}

void swap(int *pa,int *pb){
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

