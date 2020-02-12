//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//  
//#define INITIAL_CAPACITY 6
//#define GROW_CAPACITY 6
//// ArrayStack that maintains both size and capacity and can be arbitrarily resized
//typedef struct {
//  int size;     // The current size of the array
//  int capacity; // The current number of slots allocated
//  char* array;  // A pointer to the actual array
//} ArrayStack;
//
//// Grow the array by GROW_CAPACITY
//void Resize(ArrayStack * as){
//  int capacity = (as->capacity + GROW_CAPACITY) * sizeof(char);
//  as->array = realloc(as->array, capacity);
//  
//  assert(as->array != NULL);
//  
//  as->capacity = capacity;
//}
//
//// Initialize the array to INITIAL_CAPACITY
//void Initialize(ArrayStack* as) {
//  as->size = 0;
//  as->capacity = INITIAL_CAPACITY;
//  as->array = malloc(as->capacity * sizeof(char));
//  
//  assert(as->array != NULL);
//}
//
//// Get the character at position "pos"
//char Get(ArrayStack as, int pos) {
//  assert(pos >= 0 || pos < as.size);
//  
//  return as.array[pos];
//}
//
//// Set the array slot at position pos to value
//char Set(ArrayStack* as, int pos, char value) {
//  assert(pos >= 0 && pos < as->size);
//  
//  char old = as->array[pos];
//  as->array[pos] = value;
//  
//  return old;
//}
//
//// Add (push) a character to the end of the array
//void Add(ArrayStack* as, int pos, char value) {
//  if (as->size == as->capacity)
//    Resize(as);
//  
//  memmove(as->array + pos + 1, as->array + pos, (as->size - pos) * sizeof(char));
//  as->array[pos] = value;
//  as->size += 1;
//}
//
//// Remove (pop) a character from the end of the array and return it
//char Remove(ArrayStack* as, int pos) {
//  char ret = as->array[pos];
//  memmove(as->array + pos, as->array + pos + 1, (as->size - pos) * sizeof(char));
//  as->size -= 1;
//  return ret;
//}
//
//// Visualize the structure using printfs
//void Print(ArrayStack as)
//{
//  printf("Size = %d,  Capacity = %d, Contents = \"", as.size, as.capacity);
//  
//  int i;
//  for (i = 0; i < as.size; i++) {
//    printf("%c", Get(as, i));
//  }
// 
//  printf("\"\r\n");
//}
//
//// Print out the structure and then validate it against expected values
//void Validate(ArrayStack as, char* array, int size, int capacity)
//{
//  Print(as);
//  assert(size == as.size);
//  assert(capacity == as.capacity);
//  assert(!memcmp(as.array, array, size * sizeof(char)));
//}
//
//int main() {
//  ArrayStack test;
//  
//  // Setup
//  Initialize(&test);
//  Validate(test,"",0,INITIAL_CAPACITY);
//  
//  Add(&test, 0, 'b');
//  Validate(test, "b", 1, INITIAL_CAPACITY);
// 
//  Add(&test, 1, 'r');
//  Validate(test, "br", 2, INITIAL_CAPACITY);
// 
//  Add(&test, 2, 'e');
//  Validate(test, "bre", 3, INITIAL_CAPACITY);
//  
//  Add(&test, 3, 'd');
//  Validate(test, "bred", 4, INITIAL_CAPACITY);
//  
//  // Book Example
//  Add(&test, 2, 'e');
//  Validate(test, "breed", 5, INITIAL_CAPACITY);
//  
//  Add(&test, 5, 'r');
//  Validate(test, "breedr", 6, INITIAL_CAPACITY);
//  
//  Add(&test, 5, 'e');
//  Validate(test, "breeder", 7, INITIAL_CAPACITY + GROW_CAPACITY);
//  
//  Remove(&test, 4);
//  Validate(test, "breeer", 6, INITIAL_CAPACITY + GROW_CAPACITY);
//  
//  Remove(&test, 4);
//  Validate(test, "breer", 5, INITIAL_CAPACITY + GROW_CAPACITY);
//  
//  Remove(&test, 4);
//  Validate(test, "bree", 4, INITIAL_CAPACITY + GROW_CAPACITY);
//  
//  Set(&test, 2, 'i');
//  Validate(test, "brie", 4, INITIAL_CAPACITY + GROW_CAPACITY);
//}
