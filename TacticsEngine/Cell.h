#ifndef CELL_H
#define CELL_H

#include "raylib.h"
#include "GridObject.h"

class Cell
{
public:
    Cell();
    Cell(GridObject* go);
    void SetGridObject(GridObject* go) {gridObject = go;}
    GridObject* GetGridObject() {return gridObject;}
private:
    GridObject* gridObject;
};



#endif