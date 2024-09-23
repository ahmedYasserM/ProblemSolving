#include <iostream>
#include <vector>

#define cout std::cout
#define cin std::cin
#define endl std::endl
#define string std::string



int main (int argc, char *argv[])
{
  

  int n;
  cin >> n;

  std::vector<string> words;

  string input;
  do
  {
    cin >> input;
    words.push_back(input);
    n--;
  } while(n > 0);



  int count;
  string tmp;
  for(string word : words)
  {
    count = word.size();

    if(count > 10)
      word = word[0] + std::to_string(count - 2) + word[count - 1];

    cout << word << endl;
    
  }


  return 0;
}
