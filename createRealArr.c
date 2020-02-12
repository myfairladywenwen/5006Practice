// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <assert.h>
// 
// typedef struct  {
//   int length;
//   int* elements;
// } IntArray;
// 
// void init(IntArray* array, int length, int* values) {
//   assert(length > 0);
//   (*array).length = length;
//   (*array).elements = (int*)malloc(length*sizeof(int));
//   memcpy(array->elements,values,length*sizeof(int));
// }
// 
// void resize(IntArray* array, int length) {
//   assert(length > 0);
//   assert(array->length > 0);
//   array->length = length;
//   array->elements = (int*)realloc(array->elements, sizeof(int) * array->length);
//   //array->elements = (int*)realloc(array->elements, sizeof(int));
// }
// 
// void print(IntArray* array) {
//   int i;
//   const char* sep = "";
//   for (i = 0; i < array->length; i++) {
//     printf("%s%d",sep,array->elements[i]);
//     sep = ", ";
//   }
//   printf("\n");
// }
// 
// int main()
// {
//   int v[] = {3,7,15};
//   int c = sizeof(v)/sizeof(int);  // c=3
//   
//   IntArray t;
//   init(&t,c,v);  //init an array at t, copy all values in v into array at t
//   print(&t);  // 3, 7, 15
//   
//   resize(&t,5);
//   t.elements[3] = 44;
//   t.elements[4] = 77;
//   print(&t);  // 3, 7, 15, 44, 77
//   
//   resize(&t,2);  //resize t to size 2
//   print(&t);  // 3, 7
//   
//   return 0;
// }
