//#include <stdio.h>
//
//int balanceP(char* str){char c; int i = 0, count = 0;
//  while((c = str[i]) != 0){
//    if(c == '('){count++;}
//    if(c == ')'){count--;}
//    if(count < 0){break;}
//    i++;
//  }
//  return count == 0;
//}
//
//void main(){
//  char* str = "(this is (cool))";
//  printf("%s :balance:%d\n",str, balanceP(str));
//  str = ")(";
//  printf("%s :balance:%d\n",str, balanceP(str));
//  str = "()()()(bad";
//  printf("%s :balance:%d\n",str, balanceP(str));
//}
