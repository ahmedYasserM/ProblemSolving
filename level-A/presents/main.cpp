#include <iostream>

#define MAX_SIZE 100
#define min std::min
#define vector std::vector
#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string


int main (int argc, char *argv[])
{

  int n;
  cin >> n;
  
  int gifts[MAX_SIZE];

  int j;
  for (int  i = 0; i < n; i++)
  {
    cin >> j;
    gifts[j] = i + 1;
    
  }

  for(int i = 1; i <= n; i++)
  {
    cout << gifts[i] << " ";

  }

  cout << "\n";


  return 0;
}

