//#include <stdio.h>
//#define MAX 100
//#define PUD(x) dump(); printf(" pushed: %d ", x); push(x); dump(); printf("\n");
//#define POD dump(); printf(" popped: %d ", pop()); dump(); printf("\n");
//
//int stack[MAX], top;
// 
//void push(int x){if(top<MAX){stack[top++] = x;}}
//int pop(){return (top>0) ? stack[--top] : 0;}
//
//void dump(){int i; char* sep = "";
//  printf("[");
//  for(i=0;i<top;i++){printf("%s%d", sep, stack[i]); sep = ", ";}
//  printf("]");
//}
//void main(){
//  PUD(3)
//  PUD(17)
//  PUD(9)
//  POD
//  POD
//  PUD(2)
//  POD
//  POD
//  POD
//}
