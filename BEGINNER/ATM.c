#include<stdio.h>
int main(){
  int a;
  float b;
  scanf("%d %f",&a,&b);
  if(a>0 && a<=2000 && b>=0 && b<=2000){
    if(a%5==0 && a+0.5<=b)
      printf("%.2f",b-a-0.5);
    else
      printf("%.2f",b);
  }
  else
    printf("%.2f",b);
  return 0;
}
