#include <stdio.h>
#include <math.h>


int max(int a, int b)
{
  return (a > b)? a : b;
}

int main (int argc, char *argv[])
{
  
  float n, t, k, d;
  scanf("%f%f%f%f", &n, &t, &k, &d);

  // in case of one ovel
  int time1 = ceil(n / k) * t;

  //in case of two ovels
  int z = ceil(d / t);
  n -= z * k;
  int tb1 = z * t;

  int tb2 = d;


  while (n > 0)
  {
    n -= k;
    tb2 += t;

    if(n > 0)
    {
        n -= k;
        tb1 += t;
    }

  }

  int time2 = max(tb1, tb2);

  if(time2 < time1)
    printf("YES\n");
  else
    printf("NO\n");


  return 0;
}
