//#include <stdio.h>
//#define MAX 100
//#define PUD(x) dump(); printf(" pushed: %d ", x); push(x); dump(); printf("\n");
//#define POD dump(); printf(" popped: %d ", pop()); dump(); printf("\n");
//
//int stack[MAX], top; // notice: top is the count of elements on the stack. so stack[top] is just after the last element
//
//void push(int x){stack[top++] = x;}
//int pop(){return stack[--top];}
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
//}
