#include <stdio.h>

int main() {
  int lines = 5;
  int columns = 5;
  int matrix[lines][columns];

  int i;
  int k;    
  // for(i = 0; i < lines; i++) {
  //   for(k=0; k < columns; k++) {
  //     if(i == 0) {
  //       matrix[i][k] = k + 1;
  //     } else if(k == 0) {
  //       int lastItem = matrix[i -1][lines-1];
  //       matrix[i][k] = lastItem + 1;
  //     } else {
  //       int lastItem = matrix[i][k-1];
  //       matrix[i][k] = lastItem + 1;
  //     }
  //   }
  // }

  // int counter = 0;

  // for(i=0; i<lines; i++) {
  //   for(k=0; k<columns; k++) {
  //     counter += 1;
  //     matrix[i][k] = counter;
  //   }
  // }

  for(i = 0; i < lines; i++) {
    for(k=0; k < columns; k++) {
      // [0][0]
      matrix[i][k] = lines * (i + 1) - (k + 1 + (lines * i));
    }
  }

  /**
   * 
   * [
   *  [1,2,3,4,5], 5 * 1 = 5
   *  [6,7,8,9,10], 5 * 2 = 10
   * ]
   * 
   * 
   * */

  for(i=0; i<lines; i++) {
    for(k=0;k<columns;k++) {
      printf("matrix[%d][%d]=%d\n", i, k, matrix[i][k]);
    }
  }
  
  return 0;
}