#include <iostream>


#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string


int main (int argc, char *argv[])
{
  


  int n; 
  long long total_packs;
  cin >> n >> total_packs;

  int distress_count = 0;

  char sign;
  long long packs_amount;

  while (n != 0)
  {
    cin >> sign >> packs_amount;
    
    if(sign == '+')
      total_packs += packs_amount;
    else if( total_packs >= packs_amount)
      total_packs -= packs_amount;
    else
      distress_count++;

    n--;
  }

  cout << total_packs << " " << distress_count << endl;;

  return 0;
}

