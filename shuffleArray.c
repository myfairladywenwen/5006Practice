
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void printArray(int* array, int length){
//    for (int i = 0; i < length; i++) {
//        printf("%d\t", array[i]);
//    }
//    printf("\n");
//}
//
//int main(){
//    srand(time(0));
//    int a[] = {1, 2, 3};
//    int length = 3;
//    //wrong
//    printf("wrong:\n");
//    for(int i=0; i<length; i++){
//      int k = rand()%length; // pick a random index in the n long array
//      int t = a[i]; a[i] = a[k]; a[k] = t; // swap i with k
//        printf("current array:");
//        printArray(a, 3);
//    }
//    printf("result array:");
//    printArray(a, 3);
//
//    //correct
//    printf("correct:\n");
//    for(int i=length - 1; i>0; i--){
//        int k = rand()%(i+1); // pick a random number that is n the first time, n-1 the second ...，including the last item itself
//        int t = a[i]; a[i] = a[k]; a[k] = t; // swap i with k
//        printf("current array:");
//        printArray(a, 3);
//    }
//    printf("result array:");
//    printArray(a, 3);
//    
//    return 0;
//}
    


