//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//int* copy(int c, int* a) {  //copy c elements in a to ret
//    int* ret = malloc(c * sizeof(int));
//    memcpy(ret,a,c*sizeof(int));
//    return ret;
//}
//
//void merge(int c0, int *a0, int c1, int *a1, int *a) {
//    int i, i0 = 0, i1 = 0;
//    for (i = 0; i < c0 + c1; i++) {
//        if (i0 == c0){  // 说明a0已经跑完了
//            a[i] = a1[i1];
//            i1 += 1;
//        }
//        else if (i1 == c1) {  // 说明a1已经跑完了
//            a[i] = a0[i0];
//            i0 += 1;
//        }
//        //说明两个 array 还都有元素
//        else if (a0[i0] <= a1[i1]) {
//            a[i] = a0[i0];
//            i0 += 1;
//        }
//        else {
//            a[i] = a1[i1];
//            i1 += 1;
//        }
//    }
//}
//
//int* merge_sort(int c, int* a) {
//    int m;
//    int *a0, *a1, *ret;
//    if (c <= 1) {
//        return copy(c,a);
//    }
//    
//    m = c / 2;
//    a0 = merge_sort(m,a);
//    a1 = merge_sort(c-m,a+m);
//    ret = malloc(c*sizeof(int));
//    merge(m,a0,c-m,a1,ret);
//    
//    free(a0);
//    free(a1);
//    
//    return ret;
//}
//
//int isSorted(int c, int* a) {
//    int i;
//    for (i = 1; i < c; i++) {
//        if (a[i-1] > a[i]){
//            return 0;
//        }
//    }
//    return 1;
//}
//
//void test(int c, int* a) {
//    int* t = merge_sort(c,a);
//    assert(isSorted(c,t));
//    free(t);
//}
//
//int main() {
//    int t0[] = {1};
//    int t1[] = {11,9,7,3,13,8};
//    int t2[] = {13,8,5,2,4,0,6,7,3,12,1,10,11};
//        
//    test(sizeof(t0)/sizeof(int),t0);
//    test(sizeof(t1)/sizeof(int),t1);
//    test(sizeof(t2)/sizeof(int),t2);
//    return 0;
//}
