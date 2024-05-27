#include "dictionary.hpp"

void chernikova::Dictionary::insert(const std::string& word, const std::set< std::string >& translations)
{
  data_.insert({ word, translations });
}

void chernikova::Dictionary::printSet(std::ostream& output, const std::set < std::string >& set) {
  if (set.begin() != set.end())
  {
    auto last = set.end();
    --last;

    for (auto it = set.begin(); it != last; ++it)
    {
      output << *it << " ";
    }
    output << *last;
  }
}
