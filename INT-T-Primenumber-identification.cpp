#include <iostream>

using namespace std;

int main()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;
  if (number <= 1)
  {
    cout << number << " is not a prime number." << endl;
    return 0;
  }
  int counter = 0;
  for (int i = 1; i <= number; i++)
  {
    if (number % i == 0)
    {
      counter++;
    }
    if (counter > 2)
    {
      cout << number << " is not a prime number." << endl;
      return 0;
    }
  }
  if (counter == 2)
  {
    cout << number << " is a prime number." << endl;
  }
  else
  {
    cout << number << " is not a prime number." << endl;
  }
  return 0;
}
