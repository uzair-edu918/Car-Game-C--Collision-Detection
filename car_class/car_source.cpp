#include <iostream>
#include "car.h"
// #include "../Grid_Class/Grid_Source.cpp"



using namespace std;



Grid Car::Grid1 = Grid();
void Car::move_frwrd(){

    //cout << "x" << pos_x << " y" << pos_y << endl;
    if(pos_x == 0){
        return;
    }
    Grid1.grid[pos_x][pos_y] = " ";
    pos_x = pos_x - speed;
    Grid1.grid[pos_x][pos_y] = "||--||";
    Grid1.refresh();


}

Car::Car(int x, int y){
    pos_x = x; pos_y = y;
    Grid1.grid[pos_x][pos_y] = "||--||";
    Grid1.refresh();

}

void Car::move_right(){

    Grid1.grid[pos_x][pos_y] = " ";
    pos_y = pos_y + speed;
    Grid1.grid[pos_x][pos_y] = "||--||";
   
    Grid1.refresh();
}

void Car::move_left() {

    if (pos_y == 0) {
        return;
    }
    Grid1.grid[pos_x][pos_y] = " ";
    pos_y = pos_y-speed;
    Grid1.grid[pos_x][pos_y] = "||--||";
    Grid1.refresh();

}
void Car::move_back() {
    Grid1.grid[pos_x][pos_y] = " ";
    pos_x = pos_x+speed;
    Grid1.grid[pos_x][pos_y] = "||--||";
    Grid1.refresh();
}

void Car::accelerate() {

    if (speed < 4) {
        speed++;
    }
    else {
        cout << "speed max limit reached" << endl;;
    }
}

void Car::deaccelerate() {

    if (speed >= 1) {
        speed--;

    }
    else {
        cout << "the car have no speed yet" << endl;
    }
}

void Car::curr_state() {
    cout <<endl<<endl<< "speed : " << speed << " pos_x: " << pos_x << " ," << " pos_y: " << pos_y << endl;
}