#include <iostream>
#include "../Grid_Class/Grid_Source.cpp"

using namespace std;


class Car {
private:
    int pos_x;
    int pos_y;
    int speed = 1; // defualt speed

    static Grid Grid1; 
public:
    Car(int x,int y );
    void move_frwrd();
    void move_back();
    void move_right();
    void move_left();

public:
    void accelerate();
    void deaccelerate();

public:
    int get_x() const { return pos_x; }
    int get_y() const { return pos_y; }
public:
    void curr_state();
};


