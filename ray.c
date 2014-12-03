#define s atoi(*b++)
float sqrt(),A,B,i,o,w=-22,_,h,r,d,e,f;main(L,c,b)char**c,**b;{for(;w<22;w+=2){for(o=-39;++o<37;){b=c+1,h=0,i=9;while(*b)d=s,e=s,f=50-s,r=s,A=2500+o*o+w*w,B=f*50-e*w-d*o,(_=B*B-A*(f*f+d*d+e*e-r*r))>0&&(_=(B-sqrt(_))/A,_<i&&(h=(f-_*(50+o+w)-d-e)/r,i=_));putchar("......-:=#@"[(int)(h*3)+5]);}puts("");}}

