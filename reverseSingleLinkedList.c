//#include <stdio.h>
//  
//  typedef struct Node Node;
//  
//  struct Node{
//    char val;
//    Node* next;
//  };
//  
//  void show(Node* list){char* sep = "";
//    printf("{");
//    while(list != 0){
//      printf("%s%c", sep, list->val);
//      sep = ", ";
//      list = list->next;
//    }
//    printf("}\n");
//  }
//  
//  Node* reverse(Node* list){
//      Node* t;
//      Node* done = NULL;
//    while(list != NULL){
//      t = list->next;
//      list->next = done;
//      done = list;
//      list = t;
//    }
//    return done;
//  }
//  
//  int main(){
//    Node d = {'d',NULL};
//    Node c = {'c',&d};
//    Node b = {'b',&c};
//    Node a = {'a',&b};
//    
//    printf("Before reversing: "); show(&a);
//    printf("After reverse: "); show(reverse(&a));
//    
//    return 0;
//  }
//
