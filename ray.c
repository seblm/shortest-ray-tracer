#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float A, B, i, _, h;

int main(/*int argc, char *argv[]*/ L, c, b) char**c, **b; {
  for (int y = -22; y < 22; y += 2) {
    for (int x = -39; ++x < 37; ) {
      b = c + 1;
      h = 0;
      i = 9;
      while (*b) {
        int sphereX = atoi(*b++);
        int sphereY = atoi(*b++);
        int sphereZ = 50 - atoi(*b++);
        int sphereR = atoi(*b++);
        
        A = 2500 + x * x + y * y;
        B = sphereZ * 50 - sphereY * y - sphereX * x;
        
        (_ = B * B - A * (sphereZ * sphereZ + sphereX * sphereX + sphereY * sphereY - sphereR * sphereR)) > 0
          && (_ = (B - sqrt(_)) / A, _ < i
            && (h = (sphereZ - _ * (50 + x + y) - sphereX - sphereY) / sphereR, i = _));
      }
      putchar("......-:=#@"[(int)(h * 3) + 5]);
    }
    puts("");
  }
  return 0;
}
