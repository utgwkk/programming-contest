#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  char op;
  while(1){
    scanf("%d %c %d",&a,&op,&b);
    if(op == '?') break;
    if(op == '+')
      printf("%d\n",a+b);
    else if(op == '-')
      printf("%d\n",a-b);
    else if(op == '*')
      printf("%d\n",a*b);
    else if(op == '/')
      printf("%d\n",a/b);
  }
  return 0;
}