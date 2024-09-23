#include <iostream>

#define MAX_NUMBER 123

int main (int argc, char *argv[])
{
  
  char letter;

  int frequency[MAX_NUMBER] = {0};

  do
  {
    std::cin >> letter;

    if(letter >= 'a' && letter <= 'z')
        frequency[letter - 0]++;

  } while(letter != '}');

  int count = 0;

  for (int i = 97; i < MAX_NUMBER; i++)
  {
    if(frequency[i] > 0 )
      count++;
      
  }

  std::cout << count << std::endl;


  return 0;
}
