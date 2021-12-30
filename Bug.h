#ifndef BUG_H
#define BUG_H

#include <iostream>
#include <cstdlib> 
#include "animation.h"
#include "picture.h"
#include <ctime>

class Bug
{
public:
   void set_position(int s, int m);
   void reset();
   int get_x () const;
   int get_y () const;
   
   void more_x();
   void more_y();
   void less_x();
   void less_y();
   void O (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim);
   void N (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim);
   void I (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim);
   void H (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim);
   void F (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim);
   Bug();
   Bug(int k, int s);
   
   private:
   int position = 0;
   int x;
   int y;
};
#endif
