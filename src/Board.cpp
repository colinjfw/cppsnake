#include "Board.h"

vector<Token> draw(int width, int height)
{
  vector<Token> result(width*height);
  for (int i = 0; i < width; i++)
  {
    for (int j = 0; j < height; j++)
    {
      Token t;
      t.kind = Kind::empty;
      result[width * i + j] = t;
    }
  }

  return result;
}
