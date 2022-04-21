/**
 * _isupper - function that tests input whether it is Upper case
 * Return: (0)
 */

int _isupper(char c)
{
  int rev;
  
  if (isupper(c) == 0)
  {
    rev = 0;
  }
  else
  {
    rev = 1;
  }
  return rev;
}
