#include <iostream>
#include<string.h>
#include<cctype>
using namespace std;
int main() {
    char str[1000], rev[1000];
  int i, j, count = 0;
  cin>>str;
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
 rev[0] = toupper(rev[0]);
 cout<<rev;
    return 0;
}
