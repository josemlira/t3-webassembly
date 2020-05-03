#include <stdlib.h>

char* solver(char* X, char* Y, char* Z, int obj, int length, char* s_length) {

  int MAX_SIZE = length * 3; // 255
  int x_bool[length];
  int y_bool[length];
  int z_bool[length];
  char count = 0;
  char* output = malloc(MAX_SIZE * sizeof(char));

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
