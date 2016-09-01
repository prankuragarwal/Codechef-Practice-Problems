#include<stdio.h>
int main(){
  int x;
  while(1){
    scanf("%d",&x);
    if(x==42)
      break;
    printf("%d",x);
    printf("\n");
  }
  return 0;
}
