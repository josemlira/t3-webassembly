#include <stdlib.h>
#include <stdio.h>

unsigned char* solver(unsigned char* X, unsigned char* Y, unsigned char* Z, unsigned char obj, unsigned char length, unsigned char* s_length) {

  int MAX_SIZE = ((int) length) * 3;
  int x_bool[length];
  int y_bool[length];
  int z_bool[length];
  int count = 0;
  unsigned char* output = malloc(MAX_SIZE * sizeof(char));

  for (int index = 0; index < length; index++) {
    x_bool[index] = 0;
    y_bool[index] = 0;
    z_bool[index] = 0;
  }

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      for (int k = 0; k < length; k++) {
        int verify = x_bool[i] + y_bool[j] + z_bool[k];
        int result = X[i] + Y[j] + Z[k];
        if ((verify == 0) && (result == obj)) {
          x_bool[i]++;
          y_bool[j]++;
          z_bool[k]++;
          output[3*count] = X[i];
          output[3*count + 1] = Y[j];
          output[3*count + 2] = Z[k];
          count += 1;
        }
      }
    }
  }

  *s_length = count;
  if (count != length){
      *s_length = 0;
  }
  return output;

}
