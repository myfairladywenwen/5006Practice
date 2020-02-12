//void swap(char **a, char **b){char *t = *a; *a = *b; *b = t;}
//
//char **sentinelMin(char **a){char **best = a;
//  while(*a){if(strcmp(*a,*best) < 0){best = a;} a++;}
//  return best;
//}
//
//void sentinelSort(char **a){
//    while(*a){
//        swap(a, sentinelMin(a));
//        a++;
//    }
//}
//
//
//char *words[] = {"here","is","a","nice","long","list","of","words", 0};
//void sentinelShow(char **a){while(*a){printf(" %s", *a); a++;} printf("\n");}
//int main(){
//    sentinelShow(words);
//    sentinelSort(words);
//    sentinelShow(words);
//  return 0;
//}
