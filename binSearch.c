//
//#include <stdio.h>
//int a[] = {9, 3, 27, 31, 18, 5, 9, 42, 101, 7, 13, 53, 21};
//int N = 13;
//
//void show(){int i;for(i=0; i<N; i++){printf(" %d",a[i]);}printf("\n");}
//void swap(int i, int j){int t = a[i]; a[i] = a[j]; a[j] = t;}
//void insert(int k){while((k-1)>=0 && a[k-1] > a[k]){swap(k-1,k); k--;}}
//void insertionSort(){int i; for(i=1; i<N; i++){insert(i);}}
//
//int binFind(int x){
//    int lo = 0, hi = N-1, mid;
//    if(x <= a[lo]){return lo;}
//    if(x >= a[hi]){return hi;}
//    while (lo < hi -1){
//        mid = (lo+hi)/2;
//        if(a[mid] == x){return mid;}
//        if(a[mid] > x){hi = mid;}
//        else{lo = mid;}
//    }
//    return lo;
//}
//
//int main(){
//    insertionSort(a);
//    int result = binFind(19);
//    printf("%d\n", result);
//}
//
