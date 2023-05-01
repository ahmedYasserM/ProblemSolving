#include <iostream>
#include <vector>

#define min std::min
#define vector std::vector
#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string



int main (int argc, char *argv[])
{

  vector<vector<int>> v(3);

  int n;
  cin >> n;

  int t;
  for(int i = 0; i < n; i++)
  {
    cin >> t;

    if(t == 1)
      v[0].push_back(i+1);
    else if(t == 2)
      v[1].push_back(i+1);
    else
      v[2].push_back(i+1);
    
  }

  int w = min(min(v[0].size(), v[1].size()), v[2].size());
  cout << w << endl; 

  int i = 0;

  while (w != 0)
  {
    cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << endl;
    i++;
    w--;
  }



  return 0;
}

