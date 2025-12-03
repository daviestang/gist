#include <iostream>

void print()
{

}

temlate<typename T, typename... Types>
void print(T firstArg, Types... args)
{
  std::cout << firstArg << '\n';
  print(args...); // call print() for remaning arguments
}

int main()
{
  std::string s("world");
  print(7.5, "hello", s);

  return 0;
}
