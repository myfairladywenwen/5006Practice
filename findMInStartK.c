////
////  findMInStartK.c
////  cs5006
////
////  Created by Wen Xie on 1/13/20.
////  Copyright © 2020 Wen Xie. All rights reserved.
////
//
//#include <stdio.h>
//  int a[] = {9, 3, 27, 31, 18, 5, 9, 42, 101, 7, 13, 53, 21};
//  int N = 13;
//  
//  int findMinFrom(int k){
//    int i, besti = k; // assume first is best
//    for(i = k+1; i<N; i++){ // check all those after first
//      if(a[i] < a[besti]){besti = i;}
//    }
//    return besti;
//  }
//  
//  int main(){
//    int start = 3;
//    int k = findMinFrom(start);
//    printf("minimum value when starting at a[%d]=%d: a[%d] == %d.\n",start,a[start], k, a[k]);
//    
//    return 0;
//  }
////
