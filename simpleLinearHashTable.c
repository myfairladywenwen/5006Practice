//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//#define MAXHASH 283
//
//// A reasonble hash function for a string
//unsigned sax_hash(char *key) {
//  unsigned char *p = key;
//  unsigned h = 0;
//  
//  while (*p) {
//    h ^= (h << 5) + (h >> 2) + *p;
//    p += 1;
//  }
//  
//  return h;
//}
//
//// Show a single hash bucket
//void LSHT_showOne(char** lsht, int i) {
//  printf("%03d-%03d: 0x%08x %s", sax_hash(lsht[i]) % MAXHASH, i, sax_hash(lsht[i]), lsht[i]);
//}
//
//// Show a the hash table
//void LSHT_show(char** lsht) {
//  int i;
//  printf("HASHTABLE SIZE=%d\n", MAXHASH);
//  for (i = 0; i < MAXHASH; i++) {
//    if (lsht[i] != NULL) {
//      LSHT_showOne(lsht, i); printf("\n");
//    }
//  }
//}
//
//// Allocate and initialize the hash table
//char** LSHT_new() {
//  return calloc(sizeof(char*),MAXHASH);
//}
//
//// Free the hash table
//void LSHT_free(char** lsht) {
//  free(lsht);
//}
//
//// Return the string if it exists in the hash table, 0 (NULL) otherwise
//char* LSHT_find(char** lsht, char* str) {
//  assert(lsht);
//  assert(str);
//  int hash = sax_hash(str) % MAXHASH;
//  int init = hash;
//  while (lsht[hash]) {
//    if (!strcmp(lsht[hash], str)) {
//      return lsht[hash];
//    }
//    hash = (hash + 1) % MAXHASH;
//
//    if (hash == init) {
//      break;
//    }
//  }
//  return NULL;
//}
//
//// Add str to hash table, return 0 for success, if there was an
////  equal entry already return that.  Fail if table is full (assert).
//char* LSHT_add(char** lsht, char* str) {
//  assert(lsht);
//  assert(str);
//  
//  int hash = sax_hash(str) % MAXHASH;
//  int init = hash;
//  while (lsht[hash]) {
//    if (!strcmp(lsht[hash], str)) {
//      return lsht[hash];
//    }
//    hash = (hash + 1) % MAXHASH;
//    assert(hash != init);
//  }
//  
//  lsht[hash] = str;
//  return NULL;
//}
//
//int main() {
//  char** h = LSHT_new();
//  
//  char* p1 = "George Washington";
//  char* p2 = "John Adams";
//  char* p3 = "Thomas Jefferson";
//  char* p4 = "James Madison";
//  char* p5 = "James Monroe";
//  char* p6 = "John Quincy Adams";
//  assert(LSHT_add(h, p1) == NULL);
//  assert(LSHT_add(h, p2) == NULL);
//  assert(LSHT_add(h, p3) == NULL);
//  assert(LSHT_add(h, p4) == NULL);
//  assert(LSHT_add(h, p5) == NULL);
//  assert(LSHT_add(h, p6) == NULL);
//  
//  assert(LSHT_add(h, p1) == p1);
//  
//  assert(LSHT_find(h, p3) == p3);
//  assert(LSHT_find(h, p4) == p4);
//  assert(LSHT_find(h, "Abraham Lincoln") == NULL);
//  
//  LSHT_show(h);
//  
//  LSHT_free(h);
//}
