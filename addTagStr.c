//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//#define TRUE 1
//#define FALSE 0
//   
// // Write out a tag (or end tag) and return the number of characters written
//int writeTag(char* buf, char* tag, int end) {
//   char* cur = buf;
//   *cur++ = '<';
//   if (end) {
//     *cur++ = '/';
//   }
//   strcpy(cur,tag);
//   cur += strlen(tag);
//   *cur++ = '>';
//   return cur-buf;
//}
//   
// //take a string and a tag and returns the string wrapped in the tag html style e.g ("Testing","div") => "<div>Testing</div>"
// char* wrapTag(char* str, char* tag) {
//   char* ret = (char*) malloc(strlen(str) + 2*strlen(tag) + 6); // 5 is from including: <></>\0
//   char* cur = ret;
//   
//   cur += writeTag(cur,tag,FALSE);
//   strcpy(cur,str);
//   cur += strlen(str);
//   cur += writeTag(cur,tag,TRUE);
//   *cur = '\0';
//   
//   return ret;
// }
//   
// int main() {
//   char * s = wrapTag("Now is the time for all good men","div");
//   printf("%s\n",s);
//   free(s);
//   return 0;
// }
