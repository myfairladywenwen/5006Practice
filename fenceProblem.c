//
//
//#include <stdio.h>
//#define N 3
//
//void main(){int i;
//  int a[N] = {17, 32, 9};
//  
//  char* sep = ""; // we start off a seperator as null
//  printf("["); // we print out the opening bracket
//  
//  for(i=0; i<N; i++){
//    printf("%s%d", sep, a[i]); // we print the sep, then the number
//    sep = ", "; // the sep was null for the first number but is comma for all the others.
//  }
//  
//  printf("]\n");
//}
////The trick of defining a sep variable, starting it at null, and then setting it to the proper value AFTER you have actually printed something works for empty lists, or filtered lists and is just a nice pattern to know.
