#include <iostream>


#define min std::min
#define vector std::vector
#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string


int main (int argc, char *argv[])
{
  

  int n, k;
  scanf("%d %d", &n, &k);

  string passwrod = "";

  int j = 0;
  for(int i = 0; i < n; i++)  
  {
    passwrod += (j % k) + 97;
    j++;

  }

  cout << passwrod << endl;


  return 0;
}


