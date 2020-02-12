//#include <stdio.h>
//  #include <stdlib.h>
//  
//  #define DEBUG
//  
//  int NC=0; int LC=0; // count of allocated lists and nodes.
//  
//  typedef struct Node Node;
//  struct Node{int val; Node* next;};
//  
//  typedef struct List List;
//  struct List{Node* head; Node* tail; int cnt;};
//  
//  void showList(List* l, char* sep);
//  
//  Node* newNode(int x){NC++; Node* res = malloc(sizeof(Node)); res->val = x; res->next = 0; return res;}
//  void freeNode(Node* n){NC--; free(n);}
//  
//  List* newList(){LC++; List* res = malloc(sizeof(List)); res->head = 0; res->tail = 0; res->cnt=0; return res;}
//  
//  void push(List* l, int x){ // O(1)
//  #ifdef DEBUG
//    printf("Push %d onto {",x); showList(l, ", ");
//  #endif
//    Node* n = newNode(x); n->next = l->head; l->head = n;
//    if(l->tail == 0){l->tail = n;}
//    l->cnt++;
//  #ifdef DEBUG
//    printf("} -> {"); showList(l, ", "); printf("}  Nodes=%d Lists=%d\n",NC,LC);
//  #endif
//  }
//  
//  void append(List* l, int x){ // O(1)
//  #ifdef DEBUG
//    printf("Append %d onto {",x); showList(l, ", ");
//  #endif
//  
//    if(l->cnt == 0){push(l,x); return;}
//    Node* n = newNode(x);
//    l->tail->next = n;
//    l->tail = n;
//    l->cnt++;
//  #ifdef DEBUG
//    printf("} -> {"); showList(l, ", "); printf("}  Nodes=%d Lists=%d\n",NC,LC);
//  #endif
//  }
//  
//  int pop(List* l){Node* n = l->head;  // O(1)
//  #ifdef DEBUG
//    printf("pop from {"); showList(l, ", ");
//  #endif
//  
//    if(n == 0){return -1;} // attempted to pop from empty list
//    int res = n->val;
//    l->head = n->next;
//    l->cnt--;
//    if(l->head == 0){l->tail = 0;}
//    freeNode(n);
//  #ifdef DEBUG
//    printf("} -> {"); showList(l, ", "); printf("} res:%d Nodes=%d Lists=%d\n",res,NC,LC);
//  #endif
//    return res;
//  }
//  
//  int peek(List* l){return l->cnt ? l->head->val : -1;}
//  int size(List* l){return l->cnt;}
//  
//  void clearList(List* l){
//  #ifdef DEBUG
//    printf("BEFORE Clearing a list: Nodes=%d Lists=%d\n",NC,LC); showList(l, ", "); printf("\n");
//  #endif
//    while(l->cnt){pop(l);}
//  #ifdef DEBUG
//    printf("After Clearing a list: Nodes=%d Lists=%d\n",NC,LC);
//  #endif
//  }  // O(N)
//  
//  void freeList(List* l){
//  #ifdef DEBUG
//    printf("BEFORE Freeing a list: Nodes=%d Lists=%d\n",NC,LC); showList(l, ", "); printf("\n");
//  #endif
//    clearList(l);
//    free(l);
//    LC--;
//  #ifdef DEBUG
//    printf("After Freeing a list: Nodes=%d Lists=%d\n",NC,LC);
//  #endif
//  }  // O(N)
//  
//  void showList(List* l, char* sep){char* s = ""; Node* t = l->head;
//    while(t){printf("%s%d",s,t->val); s = sep; t=t->next;}
//  }
//  
//  int main(){
//    List* L = newList();
//    push(L, 8);
//    append(L, 9);
//    push(L, 7);
//    clearList(L); // just removes all the elements
//    freeList(L); // removes element and nukes the list
//    return 0;
//  }
//
