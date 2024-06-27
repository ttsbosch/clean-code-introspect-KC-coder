#include "StringCalculator.h"

using namespace std;

int StringCalculator::add(string str)
{
  int value = 0;
  for(int i = 0 ; i < str.size() ; ++i)
    {
       if (isdigit(str[i]))
        {
          value += atoi (str);
        }
    }
  return value;
}
