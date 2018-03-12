#include <original.h>

#include <math.h>
#include <stdexcept>

const std::vector<Point> extractPoints_1(std::vector<Point> &Points) {
  std::vector<Point> Result;  // Extracted points
  int QQ;
  int j = 0, f = 0, pp = QQ = 0, l = 0;

  if (Points.size() == 0) {
    return Result;
  }

  for (j = 1; j != Points.size(); j++) {
    if (Points[j - 1].y < 0 && Points[j].y >= 0) {
      pp = j;

      break;
    }
  }

  for (f = 0; f < Points.size() - 1; ++f) {
    if (Points[f].y >= 0 && Points[f + 1].y < 0) {
      QQ = f;

      break;
    }
  }

  if (pp == QQ) {
    if ((*Points.begin()).y >= 0) {
      return Points;
    } else {
      return Result;
    }
  }

  l = pp;

  while (l != QQ) {
    if (Points[l].y < 0) {
      throw std::runtime_error("Unexpected order");
    }
    if (++l >= Points.size()) l = 0;  // some magic
  }

  l = QQ;

  while (l != pp) {
    if (Points[l].y >= 0) {
      throw std::runtime_error("Unexpected order");
    }
    if (++l >= Points.size()) l = 0;  // some magic
  }

  return std::move(Result);  // move Result
}
