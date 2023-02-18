#include <iostream>
#include <string>
using namespace std;




int main (int argc, char *argv[])
{

  int n, anton = 0, danik = 0;
  string input;

  cin >> n;
  cin >> input;

  for (int i = 0; i < n; i++) {

    if(input[i] == 'A' )
      anton++;
    else
     danik++;
  }

  if(anton > danik)
    cout << "Anton" << endl;
  else if (danik > anton)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl;;

  return 0;
}

