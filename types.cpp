//----------------------------------------------------------------------------------------
// types -- Define COMPLEX, TPointDouble and TRectDouble types
// (c) 1998-2005 R.P.S.M. Lobo - lobo@espci.fr
// File created: 1998/01/01
// Last update: 2010/09/27
//----------------------------------------------------------------------------------------
#include "types.h"
//----------------------------------------------------------------------------------------
// TPointDouble class default constructor
//----------------------------------------------------------------------------------------
lobo::TPointDouble::TPointDouble() :
  _x(0), _y(0) {}
//----------------------------------------------------------------------------------------
// TPointDouble class constructor from four values
//----------------------------------------------------------------------------------------
lobo::TPointDouble::TPointDouble(double x, double y) :
  _x(x), _y(y) {}
//----------------------------------------------------------------------------------------
// TPointDouble class copy constructor
//----------------------------------------------------------------------------------------
lobo::TPointDouble::TPointDouble(const TPointDouble &P):
  _x(P._x), _y(P._y) {}
//----------------------------------------------------------------------------------------
// TPointDouble class assign function
//----------------------------------------------------------------------------------------
void lobo::TPointDouble::Assign(double x, double y)
{
  _x = x;
  _y = y;
}
//----------------------------------------------------------------------------------------
// TPointDouble class operator '='
//----------------------------------------------------------------------------------------
const lobo::TPointDouble &lobo::TPointDouble::operator=(const lobo::TPointDouble &P)
{
  if (this == &P)
    return *this;

  _x = P._x;
  _y = P._y;

  return *this;
}
//----------------------------------------------------------------------------------------
// Out stream
//----------------------------------------------------------------------------------------
std::ostream &lobo::operator<<(std::ostream &os, const lobo::TPointDouble &P)
{
  os << P._x << '\t' << P._y;
  return os;
}
//----------------------------------------------------------------------------------------
// In stream
//----------------------------------------------------------------------------------------
std::istream &lobo::operator>>(std::istream &is, lobo::TPointDouble &P)
{
  is >> P._x >> P._y;
  return is;
}
//----------------------------------------------------------------------------------------
// TRectDouble class default constructor
//----------------------------------------------------------------------------------------
lobo::TRectDouble::TRectDouble() :
  _x1(0), _y1(0), _x2(0), _y2(0) {}
//----------------------------------------------------------------------------------------
// TRectDouble class constructor from four values
//----------------------------------------------------------------------------------------
lobo::TRectDouble::TRectDouble(double x1, double y1, double x2, double y2) :
  _x1(x1), _y1(y1), _x2(x2), _y2(y2) {}
//----------------------------------------------------------------------------------------
// TRectDouble class copy constructor
//----------------------------------------------------------------------------------------
lobo::TRectDouble::TRectDouble(const TRectDouble &R):
  _x1(R._x1), _y1(R._y1), _x2(R._x2), _y2(R._y2) {}
//----------------------------------------------------------------------------------------
// TRectDouble class assign function
//----------------------------------------------------------------------------------------
void lobo::TRectDouble::Assign(double x1, double y1, double x2, double y2)
{
  _x1 = x1;
  _y1 = y1;
  _x2 = x2;
  _y2 = y2;
}
//----------------------------------------------------------------------------------------
// TRectDouble class operator '='
//----------------------------------------------------------------------------------------
const lobo::TRectDouble &lobo::TRectDouble::operator=(const lobo::TRectDouble &R)
{
  if (this == &R)
    return *this;

  _x1 = R._x1;
  _y1 = R._y1;
  _x2 = R._x2;
  _y2 = R._y2;

  return *this;
}
//----------------------------------------------------------------------------------------
// Out stream
//----------------------------------------------------------------------------------------
std::ostream &lobo::operator<<(std::ostream &os, const lobo::TRectDouble &R)
{
  os << R._x1 << '\t' << R._y1 << '\t' << R._x2 << '\t' << R._y2;
  return os;
}
//----------------------------------------------------------------------------------------
// In stream
//----------------------------------------------------------------------------------------
std::istream &lobo::operator>>(std::istream &is, lobo::TRectDouble &R)
{
  is >> R._x1 >> R._y1 >> R._x2 >> R._y2;
  return is;
}
