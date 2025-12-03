#include <iostream>

template<decltype<auto> N>
class Message
{
public:
  void print()
  {
    std::cout << N << '\n';
  }
};

int main()
{
  Message<42> msg1;
  msg1.print();
}
