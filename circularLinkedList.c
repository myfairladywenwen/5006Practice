//#include <stdio.h>
//#define BACK qs->next
//#define FRONT qs->next->next
//  
//typedef struct QS QS;
//struct QS{
//    int val;
//    QS* next;
//};
//  
//  int isNull(QS* qs){return BACK == 0;}
//  void rollFrontToBack(QS* qs){BACK = FRONT;}
//  void addSinglton(QS* qs, QS* x){x->next = x; BACK = x;} // add x to null list
//  void addFront(QS* qs, QS* x){x->next = FRONT; FRONT = x;} // add x to non-null list
//  
//  QS* removeFront(QS*qs){ // assumes list is non-empty
//    QS* res = FRONT;
//    FRONT = res->next;
//    if(BACK == res){BACK = 0;} // just removed last item
//    return res;
//  }
//  
//  void push(QS* qs, QS* x){if(isNull(qs)){addSinglton(qs,x);} else {addFront(qs,x);} }
//  void enqueue(QS* qs, QS* x){push(qs, x); rollFrontToBack(qs);}
//  QS* pop(QS* qs){if(isNull(qs)){return 0;} else {return removeFront(qs);} }
//  int peek(QS* qs){if(isNull(qs)){return -1;} else {return FRONT->val;}}
//  
//  int main(){
//    // some single nodes to play with
//    QS a = {19, 0};
//    QS b = {27, 0};
//    QS c = {35, 0};
//    
//    // a null list
//    QS qs = {0,0};
//    
//    printf("list starts empty %d\n", peek(&qs));
//    push(&qs, &b);
//    printf("we push b %d\n", peek(&qs));
//    enqueue(&qs, &a);
//    printf("we enqueue a %d\n", peek(&qs));
//    printf("we pop b %d\n", pop(&qs)->val);
//    printf("and are left with a %d\n", peek(&qs));
//    printf("we pop a %d\n", pop(&qs)->val);
//    printf("we pop empty %d\n", pop(&qs));
//    
//    return 0;
//  }
//
