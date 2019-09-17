#pragma once

#include <vector>
using namespace std;

enum Kind
{
  empty,
  food,
  snake
};

struct Token
{
  Kind kind;
  int id;
  bool head;
  bool tail;
  int size;
};

vector<Token> draw(int width, int height);
