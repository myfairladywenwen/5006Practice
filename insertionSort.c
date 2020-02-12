//#include<stdio.h>
//int a[] = {9, 3, 27, 31, 18, 5, 9, 42, 101, 7, 13, 53, 21};
//int N = 13;
//
//void show(){
//    int i;
//    for(i=0; i<N; i++){
//        printf(" %d",a[i]);
//    }
//    printf("\n");}
//// helper to spew array
//void swap(int i, int j){int t = a[i]; a[i] = a[j]; a[j] = t;}
//
//void insert(int k){
//  while((k-1)>=0 && a[k-1] > a[k]){
//      swap(k-1,k);
//      k--;
//  }
//} // don't forget to decrease k in the loop!
//
//void insertionSort(){
//    int i;
//    for(i=1; i<N; i++){//第0个不用做
//        insert(i);
//    }
//}
//
//int main(){
//  show();
//  insertionSort();
//  show();
//  
//  return 0;
//}
