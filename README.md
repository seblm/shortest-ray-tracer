After visiting [Shortest Ray Tracer](http://www.teamten.com/lawrence/projects/shortest_ray_tracer), I wanted to understand what this code is about.
So I try [make it works on my machine](http://chezmoicamarche.com) and then try to de-obfuscate it.

Original version throws theses warnings when compiling and this error when run it :

    $ make ray && ./ray 0 0 0 15 -15 2 15 5 10 -10 10 5
    ray.c:2:7: warning: incompatible redeclaration of library function 'sqrt' [-Wincompatible-library-redeclaration]
    float sqrt(),A,B,i,o,w=-22,_,h,r,d,e,f;main(L,c,b)char**c,**b;{for(;w<22;w+=2){for(o=-39;++o<37;){b=c+1,h=0,i=9;while(*b)d=s,e=s,f=50-s,r=s,A=2500+o*o+w*w,B=f*50-e*w-d*o,(_=B*B-A*(f*f+d*d+e*e-r*r)...
          ^
    ray.c:2:7: note: 'sqrt' is a builtin with type 'double (double)'
    ray.c:2:40: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
    float sqrt(),A,B,i,o,w=-22,_,h,r,d,e,f;main(L,c,b)char**c,**b;{for(;w<22;w+=2){for(o=-39;++o<37;){b=c+1,h=0,i=9;while(*b)d=s,e=s,f=50-s,r=s,A=2500+o*o+w*w,B=f*50-e*w-d*o,(_=B*B-A*(f*f+d*d+e*e-r*r)...
                                           ^~~~
    ray.c:2:124: warning: implicit declaration of function 'atoi' is invalid in C99 [-Wimplicit-function-declaration]
    float sqrt(),A,B,i,o,w=-22,_,h,r,d,e,f;main(L,c,b)char**c,**b;{for(;w<22;w+=2){for(o=-39;++o<37;){b=c+1,h=0,i=9;while(*b)d=s,e=s,f=50-s,r=s,A=2500+o*o+w*w,B=f*50-e*w-d*o,(_=B*B-A*(f*f+d*d+e*e-r*r)...
                                                                                                                               ^
    ray.c:1:11: note: expanded from macro 's'
    #define s atoi(*b++)
              ^
    ray.c:2:254: warning: implicit declaration of function 'putchar' is invalid in C99 [-Wimplicit-function-declaration]
      ...putchar("......-:=#@"[(int)(h*3)+5]);}puts("");}}
         ^
    ray.c:2:292: warning: implicit declaration of function 'puts' is invalid in C99 [-Wimplicit-function-declaration]
      ...puts("");}}
         ^
    5 warnings generated.
    ...........................................................................
    ...........................................................................
    ...........................................................................
    ...........................................................................
    [1]    18128 segmentation fault  ./ray 0 0 0 15 -15 2 15 5 10 -10 10 5

Resolved by removing declaration of `float sqrt()`.
