#pragma once

#include <vector>
using namespace std;

struct Coord
{
  int x;
  int y;
};


struct Snake
{
  int id;
  int health;
  vector<Coord> body;
};


struct Board
{
  int turn;
  int height;
  int width;
  Snake you;
  vector<Coord> food;
  vector<Snake> snakes;
};
