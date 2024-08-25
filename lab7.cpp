#include <iostream>
#include <vector>
#include <conio.h>
#include <cstdlib>
#include "./car_class/car_source.cpp"
#include <windows.h>
using namespace std;

int main(){

    //array of 10 cars
    Car* cars[10];

    //creating objects and assigning random posiions to cars
    int rand_x;
    int rand_y;
    for (int i = 0; i < 10; i++) {
        //Sleep(10);
        rand_x = rand() % 20;     
        rand_y = rand() % 30;
        cars[i] = new Car(rand_x , rand_y);
    }

    // hide the input cursor
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
    // hide the input cursor



    int rand_behavior;
    int rand_car;
    int temp_x;
    int temp_y;

    while (1) {

        rand_behavior = rand() % 4;
        rand_car = rand() % 10;
        switch (rand_behavior)
        {

        case 0:
            cars[rand_car]->move_frwrd();
            //O(N) Complexity Colission Detection searching
            temp_x = cars[rand_car]->get_x();
            temp_y = cars[rand_car]->get_y();
            for (int i = 0; i < 10; i++) {
                 
                if ((temp_x == cars[i]->get_x()) && (temp_y == cars[i]->get_y()) && (i != rand_car)) {
                    cout << "COLLISION DETECTED"<<endl;
                    cout << "car index: " << rand_car << "collides " << "car index : " << i;
                    Sleep(1000);

                }

            }
            //O(N) Complexity Colission Detection searching


            cars[rand_car]->curr_state();
            break;

        case 1:
            cars[rand_car]->move_left();
            temp_x = cars[rand_car]->get_x();
            temp_y = cars[rand_car]->get_y();

            //O(N) Complexity Colission Detection searching

            for (int i = 0; i < 10; i++) {

                if ((temp_x == cars[i]->get_x()) && (temp_y == cars[i]->get_y()) && (i != rand_car)) {
                    cout << "COLLISION DETECTED"<<endl;
                    cout << "car index: " << rand_car << "collides " << "car index : " << i;

                    Sleep(1000);

                }
               
            }
            //O(N) Complexity Colission Detection searching

            cars[rand_car]->curr_state();

            break;
        case 2:
            cars[rand_car]->move_right();

            //O(N) Complexity Colission Detection 
            temp_x = cars[rand_car]->get_x();
            temp_y = cars[rand_car]->get_y();

            for (int i = 0; i < 10; i++) {

                if ((temp_x == cars[i]->get_x()) && (temp_y == cars[i]->get_y()) && (i != rand_car)) {
                    cout << "COLLISION DETECTED"<<endl;
                    cout << "car index: " << rand_car << "collides " << "car index : " << i;

                    Sleep(1000);

                }
               
            }
            //O(N) Complexity Colission Detection searching

            cars[rand_car]->curr_state();

            break;
        case 3:
            cars[rand_car]->move_back();

            //O(N) Complexity Colission Detection searching

            temp_x = cars[rand_car]->get_x();
            temp_y = cars[rand_car]->get_y();
            for (int i = 0; i < 10; i++) {

                if ((temp_x == cars[i]->get_x()) && (temp_y == cars[i]->get_y()) && (i != rand_car)) {
                    cout << "COLLISION DETECTED"<<endl;
                    cout << "\t\tcar index: " << rand_car << "collides " << "car index : " << i;

                    Sleep(1000);

                }
            }

            //O(N) Complexity Colission Detection searching

            cars[rand_car]->curr_state();

            break;
        default:
            break;
        }

    }

    return 0;
}