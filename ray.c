#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(/*int argc, char *argv[]*/ L, c, b) char**c, **b; {
  for (int y = -22; y < 22; y += 2) {
    for (int x = -39; ++x < 37; ) {
      b = c + 1;
      float h = 0;
      float i = 9;
      while (*b) {
        int sphereX = atoi(*b++);
        int sphereY = atoi(*b++);
        int sphereZ = 50 - atoi(*b++);
        int sphereR = atoi(*b++);
        
        int A = 2500 + x * x + y * y;
        int B = sphereZ * 50 - sphereY * y - sphereX * x;
        float _ = B * B - A * (sphereZ * sphereZ + sphereX * sphereX + sphereY * sphereY - sphereR * sphereR);
        
        if (_ > 0) {
          _ = (B - sqrt(_)) / A;
          if (_ < i) {
            h = (sphereZ - _ * (50 + x + y) - sphereX - sphereY) / sphereR;
            i = _;
          }
        }
      }
      putchar("......-:=#@"[(int)(h * 3) + 5]);
    }
    puts("");
  }
  return EXIT_SUCCESS;
}
