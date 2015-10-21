
#include <iostream>
using namespace std;


class move
    {
        private:
        double x;
        double y;

        public:
        move(); // sets x, y to a, b
        void showmove(); // shows current x, y values
		void shift_x(double x2);
		void shift_y(double y2);
       move add(const move  m) const ; // this function adds x of m to x of invoking object to get new x,
        // adds y of m to y of invoking object to get new y, creates a new
        // move object initialized to new x, y values and returns it
       void reset(double a = 0, double b = 0); // resets x,y to a, b
    };