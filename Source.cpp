//
// Created by A3_Lincoln on 09.11.2018.
//
#include <cmath>
#include"Header.h"

int Darts(int x, int y) {
  double radius;
  int score;
  radius = (sqrt(x*x + y*y));
  if (radius > 5) {
    score = 0;
  }
  else if (radius >= 4 && radius <= 5) {
    score = 1;
  }
  else if (radius >= 3 && radius < 4) {
    score = 2;
  }
  else if (radius >= 2 && radius < 3) {
    score = 3;
  }
  else if (radius >= 1 && radius < 2) {
    score = 4;
  }
  else if (radius >= 0 && radius < 1) {
    score = 5;
  }
    return score;
}
