//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//#define TRUE 1
//#define FALSE 0
//
//// Write out a tag (or end tag) and return the number of characters written
//int writeTag(char* buf, char* tag, int end) {
//    char* cur = buf;
//    
//    *cur++ = '<';
//    if (end) {
//      *cur++ = '/';
//    }
//    strcpy(cur,tag);
//    cur += strlen(tag);
//    *cur++ = '>';
//    
//    return cur-buf;
//}
//  
//  //take a string and a tag and returns the string wrapped in the tag html style e.g ("Testing","div") => "<div>Testing</div>"
//  char* wrapTag(char* str, char* tag) {
//    char* ret = (char*) malloc(strlen(str) + strlen(tag) + 5); // 5 is from including: <><>\0
//    char* cur = ret;
//    
//    cur += writeTag(cur,tag,FALSE);
//    strcpy(cur,str);
//    cur += strlen(str);
//    cur += writeTag(cur,tag,TRUE);
//    *cur = '\0'; // null terminator
//    
//    return ret;
//  }
//  
//  // Wraps each of a null terminated list of strings in the tag
//  char** wrapTags(char** a, char* tag) {
//    char** ret;
//    int i;
//    
//    // Find the length of the incoming array
//    for (i=0; a[i]; i++){}
//    ret = calloc(i+1,sizeof(char*));//这里仅仅给存放指向 strings 的指针们分配了内存
//    
//    for (i=0; a[i]; i++) {
//      ret[i] = wrapTag(a[i],tag);//strings各自占用的空间在 function 里面去分配
//    }
//    // null terminator handled by calloc
//    
//    return ret;
//  }
//  
//  void printStrings(char** a) {
//    while (*a) {
//      printf("%s\n",*a);
//      a += 1;
//    }
//  }
//  
//  void freeStrings(char** a) {
//    int i;
//    for(i = 0; a[i]; i++) {
//      free(a[i]);
//    }
//    free(a);
//  }
//  
//  int main() {
//    char* text[] = {
//      "This is a paragraph.",
//      "And another paragraph.",
//      "Here is the final and slightly longer paragraph.",
//      NULL
//    };
//    
//    char** as = wrapTags(text,"p");
//    printStrings(as);
//    freeStrings(as);
//    
//    return 0;
//  }
//
