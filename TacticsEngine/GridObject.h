#ifndef GRIDOBJECT_H
#define GRIDOBJECT_H

#include "raylib.h"

class GridObject {
public:
    GridObject(Color c = PURPLE);

protected:
    void DrawObject(int x, int y);

private:
    Color color;
};

#endif // GRIDOBJECT_H