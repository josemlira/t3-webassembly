int solver() {

  int length = 3; // k: cantidad de elementos en cada set
  int obj = 10;   // b: valor que debe tener la suma
  int x[] = { 3, 4, 4 };
  int y[] = { 1, 4, 6 };
  int z[] = { 1, 2, 5 };
  int x_bool[length];
  int y_bool[length];
  int z_bool[length];

  for (int index = 0; index < length; index++) {
    x_bool[index] = 0;
    y_bool[index] = 0;
    z_bool[index] = 0;
  }
  int total = 0;

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      for (int k = 0; k < length; k++) {
        int verify = x_bool[i] + y_bool[j] + z_bool[k];
        int result = x[i] + y[j] + z[k];
        if ((verify == 0) && (result == obj)) {
          x_bool[i]++;
          y_bool[j]++;
          z_bool[k]++;
          total += result;
          // printf("%i,%i,%i\n", x[i], y[j], z[k]);
        }
      }
    }
  }

  return total;
}
