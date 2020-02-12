//
//#include <stdio.h>
//#include <assert.h>
//
//
//int mystrlen(char* sz){
//    int count = 0;
//    while(*sz){
//        count++;
//        sz++;
//    }
//    return count;;
//}
//
////return a pointer to the 1st occurrance of the argument char
////char* strchr(char* sz, char c) {
////  while (*sz && *sz != c) sz++;
////  return *sz ? sz : 0;
////}
//char* find_idx(char* sz, char x){
//    char* tmp = sz;
//    //int idx = 0;
//    while (tmp){
//        if (*tmp == x){
//            return tmp;
//        }
//        tmp++;
//    }
//    return NULL;
//}
//
////比较字符串（里面的char）是否相同
////returns 0 if equal, negative int if s1<s2, positive int if s1>s2
//int mystrcmp(char* sz1, char* sz2){
//  while (*sz1 && *sz1 == *sz2) {
//    sz1++; sz2++;
//  }
//  return *sz1 - *sz2;
//
//}
//
//// Copy string
////  Copies the C string pointed by src into the array pointed by dst, including the terminating null character (and stopping at that point).
//// return the new string

//char* mystrcopy(char* dest, char* src){
//    char* tmp = dest;
//    while (*src) {
//        *dest++ = *src++;
//    }
//    *dest = *src;
//    return tmp;
//    
//}
//
//
////  Locate substring
////    Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
//char* find_str2_in_str1(char* haystack, char* needle) {
//    char* origN = needle;
//    while(*haystack){
//        char* tmp = haystack;
//        while(*haystack == *needle){
//            needle++;
//            if(*needle){
//                haystack++;
//           }
//            else{
//                return tmp;
//            }
//        }
//        haystack++;
//        needle = origN;
//    }
//    return NULL;
//}
//
//int main(){
//    char* str1 = "aaaabcdert";
//    char* result = find_str2_in_str1(str1, "bc");
//    assert(result == str1 + 4);
//    assert(find_str2_in_str1("aaa", "cc") ==  NULL);
//    char* str2 = "aaabcdef";
//    assert(find_str2_in_str1(str2, "ab") == str2 + 2);
//}
