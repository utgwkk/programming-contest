#include <stdio.h>
int main(){
  int x,i;
  for(i=1;;i++){
    scanf("%d\n",&x);
    if(x==0)break;
    printf("Case %d: %d\n",i,x);
  }
  return 0;
}
