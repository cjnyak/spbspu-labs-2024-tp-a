#include <iostream>
#include "polygon.hpp"
#include <iterator>
#include <functional>

int main()
{
  using namespace grechishnikov;
  //Point t{ 0, 0 };
  //Polygon polygon;
  //std::cin >> polygon;
  //if (!std::cin)
  //{
  //  std::cout << "AAAAA" << '\n';
  //  return 0;
  //}
  //for (size_t i = 0; i < polygon.points.size(); i++)
  //{
  //  std::cout << polygon.points[i].x << " " << polygon.points[i].y << '\n';
  //}
  //int i = 5;
  //std::cin >> i;
  //std::cout << i << '\n';

  std::vector< Polygon > t1;
  std::copy(std::istream_iterator< Polygon >(std::cin), std::istream_iterator< Polygon >(), std::back_inserter(t1));

  if (!std::cin && !std::cin.eof())
  {
    std::cout << "AAAAA" << '\n';
    return 0;
  }

  for (size_t i = 0; i < t1.size(); i++)
  {
    for (size_t j = 0; j < t1[i].points.size(); j++)
    {
      std::cout << t1[i].points[j].x << " " << t1[i].points[j].y << ' ';
    }
    std::cout << '\n';
  }

}
