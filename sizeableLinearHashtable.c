//#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <assert.h>
// 
// #define MAXHASH 283
// 
// // A reasonble hash function for a string
// unsigned sax_hash(char *key)
// {
//   unsigned char *p = key;
//   unsigned h = 0;
//   
//   while (*p)
//   {
//       h ^= (h << 5) + (h >> 2) + *p;
//       p += 1;
//   }
//   
//   return h;
// }
// 
// // Linear string hash table
// typedef struct LSHT LSHT;
// struct LSHT {
//   int size;
//   char* table[];
// };
// 
// // Show a single hash bucket
// void LSHT_showOne(LSHT* lsht, int i) {
//   printf("%03d-%03d: 0x%08x %s",sax_hash(lsht->table[i])%lsht->size,i,sax_hash(lsht->table[i]), lsht->table[i]);
// }
// 
// // Show a the hash table
// void LSHT_show(LSHT* lsht) {
//   int i;
//   printf("HASHTABLE SIZE=%d\n",lsht->size);
//   for (i = 0; i < lsht->size; i++) {
//     if (lsht->table[i] != NULL) {
//       LSHT_showOne(lsht,i);printf("\n");
//     }
//   }
// }
// 
// // Allocate and initialize the hash table
// LSHT* LSHT_new(int size) {
//   LSHT* ret = calloc(sizeof(LSHT)+sizeof(char*)*size,1);
//   ret->size = size;
//   return ret;
// }
// 
// // Free the hash table
// void LSHT_free(LSHT* lsht) {
//   free(lsht);
// }
// 
// // Return the string if it exists in the hash table, 0 (NULL) otherwise
// char* LSHT_find(LSHT* lsht, char* str) {
//   assert(lsht);
//   assert(str);
//   int hash = sax_hash(str) % lsht->size;
//   int init = hash;
//   while (lsht->table[hash]) {
//     if (!strcmp(lsht->table[hash],str)) {
//       return lsht->table[hash];
//     }
//     hash = (hash+1) % lsht->size;
//     if (hash == init) {
//       break;
//     }
//   }
//   return NULL;
// }
// 
// // Add str to hash table, return 0 for success, if there was an
// //  equal entry already.  Fail if table is full (assert).
// char* LSHT_add(LSHT* lsht, char* str) {
//   assert(lsht);
//   assert(str);
//   
//   int hash = sax_hash(str) % lsht->size;
//   int init = hash;
//   while (lsht->table[hash]) {
//     if (!strcmp(lsht->table[hash],str)) {
//       return lsht->table[hash];
//     }
//     hash = (hash+1) % lsht->size;
//     assert(hash != init);
//   }
//   
//   lsht->table[hash] = str;
//   return NULL;
// }
// 
// void testHash(int size) {
//   LSHT* h = LSHT_new(size);
//   
//   char* p1 = "George Washington";
//   char* p2 = "John Adams";
//   char* p3 = "Thomas Jefferson";
//   char* p4 = "James Madison";
//   char* p5 = "James Monroe";
//   char* p6 = "John Quincy Adams";
//   assert(LSHT_add(h,p1) == NULL);
//   assert(LSHT_add(h,p2) == NULL);
//   assert(LSHT_add(h,p3) == NULL);
//   assert(LSHT_add(h,p4) == NULL);
//   assert(LSHT_add(h,p5) == NULL);
//   assert(LSHT_add(h,p6) == NULL);
//   
//   assert(LSHT_add(h,p1) == p1);
//   
//   assert(LSHT_find(h,p3) == p3);
//   assert(LSHT_find(h,p4) == p4);
//   assert(LSHT_find(h,"Abraham Lincoln") == NULL);
//   
//   LSHT_show(h);
//   LSHT_free(h);
// }
//   
// int main() {
//   testHash(MAXHASH);
//   testHash(7);
//   testHash(5);
// }
