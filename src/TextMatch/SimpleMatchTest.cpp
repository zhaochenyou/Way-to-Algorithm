#include "SimpleMatch.h"
#include <cassert>
#include <iostream>
using namespace std;

#define TEST_MAX 1024

struct Test {
  string text;
  string pattern;
  vector<int> pos;
} tests[] = {
    {
        "asdfasdfasdfasdf",
        "asdf",
        {0, 4, 8, 12},
    },
    {
        "asdfasdfasdfasdf",
        "asdf",
        {0, 4, 8, 12},
    },
};

int main() {
  for (int i = 0; i < sizeof(tests) / sizeof(Test); i++) {
    Test &t = tests[i];
    assert(SimpleMatch(t.text, t.pattern) == t.pos);
  }
  return 0;
}
