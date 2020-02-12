//
//  2D6.c
//  cs5006
//
//  Created by Wen Xie on 1/12/20.
//  Copyright © 2020 Wen Xie. All rights reserved.
//

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main(){
//  srand(time(NULL));
//  int hist[13]; // histogram array 因为一共有 13 种sum结果
//  int i, r, N=13, D=6;
//  
//  for(i=0;i<N;i++){hist[i]=0;} // clear the histogram
//  
//  for(i = 0; i<3600; i++){
//    r = rand()%D + 1;
//    r += rand()%D + 1; // add the second die roll
//    hist[r]++;//sum 是多少，就放在对应的【】里，数量+1
//   }
//   
//  for(i=0; i<N; i++){
//    printf(" %d", hist[i]);
//   }
//  return 0;
//}
