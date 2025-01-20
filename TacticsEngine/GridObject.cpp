#include "GridObject.h"

GridObject::GridObject(Color c) :
    color(c) {}

void GridObject::DrawObject(int x, int y)
{
    DrawCircle(x, y, 50, color);
}