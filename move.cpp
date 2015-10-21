#include "move.h"

#include <iostream>
#ifndef _mov_
#define _mov_
using namespace std;


move ::  move(){
	x=0;
	y=0;
}
void move::  showmove() {
	
	cout<<" x = "<<x<<" y = "<<y<<endl;
}
        void move ::shift_x(double x2){
			x=x2+x;
		}
		void move ::shift_y(double y2){

			y=y2+y;
		}
        move move :: add(const move  m) const{
			
			
			return m;
		}; 

#endif