#include <stdio.h>
  #define MAX 100
  
  char* OCPairs = "()[]{}"; // note: openers are all at even indices
  
  // stack for tracking opening chars - the int is the pair index of the opener
  int stack[MAX]; int top;
  void push(int x){if(top<MAX){stack[top++] = x;}}
  int pop(){return (top>0) ? stack[--top] : -1;}
  int peek(){return (top>0) ? stack[top-1] : -1;}
  
  int locPairChar(char c){int i; // locate a char in the OCPairs string
    for(i=0; OCPairs[i]!=0; i++){if(OCPairs[i] == c){return i;}}
    return -1;
  }
  
  int processChar(char c){ // returns 1 on bad char
    int iP = locPairChar(c); // see if this is a char we care about
    if(iP == -1){return 0;} // skip over irrelevant chars
    if(iP%2 == 0){return opener(iP);} else{return closer(iP);}
  }
  
  int opener(int iP){push(iP+1); return 0;} // always OK to nest deeper
  int closer(int iP){int k = pop(); return(k==iP)? 0 : 1;}
  

//return 0 if mathced, otherwise return 1
  int balance(char* str){int i = 0; char c;
    top = 0; // nuke the stack before we start
    while((c = str[i++]) != 0){if(processChar(c) != 0){return 1;}}
    return (top == 0) ? 0: 1; // anything left on stack means unblanced
  }
  
  void show(char* str){printf("%d %s\n", balance(str), str);}
  int main(){
    show("()");
    show("[()");
    show("[()]");
    show("[({{))");
    show("{[(])}");
    show("[][(){}]()");
    
    return 0;
  }

