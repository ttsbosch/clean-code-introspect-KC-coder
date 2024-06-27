#include "StringCalculator.h"

using namespace std;

int StringCalculator::add(string str)
{
  int finalValue = 0;
  for(int i = 0 ; i < str.size() ; ++i)
    {
       if (isdigit(str[i]))
        {
          int value = (str[i] - 48);
          if(value < 0)
          {
            return std::runtime_error;
          }
          finalValue +=value;
        }
    }
  return finalValue;
}
