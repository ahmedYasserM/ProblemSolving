#include <iostream>
using namespace std;




int main (int argc, char *argv[])
{
  
int n, h, a, sum = 0;
cin >> n;

cin >> h;
for (int i = 0; i < n; i++) {

  cin >> a;

  if(a <= h)
    sum += 1;
  else
   sum += 2;

}


cout<<sum<<endl;

  return 0;
}

