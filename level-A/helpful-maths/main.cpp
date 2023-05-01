#include <iostream>


#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string



int main (int argc, char *argv[])
{
  

  string s; 
  cin >> s;

  int f[4] = {0};

  int length = s.size();

  for (int i = 0; i < length; i++) 
  {
    if(s[i] != '+')
      f[s[i] - '0']++;
  }

  string r = "";

  while (f[1] > 0)
  {
    r += "1+";
    f[1]--;
  }

  while (f[2] > 0)
  {
    r += "2+";
    f[2]--;
  }

  while (f[3] > 0)
  {
    r += "3+";
    f[3]--;
  }

  // r.erase(length, 1);


  cout << r << endl;

  cout << r[length-1] << endl;
  cout << r.size() << endl;



  return 0;
}

