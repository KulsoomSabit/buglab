#include "Bug.h"

Bug::Bug()
{
	x=0;
	y=0;
}
Bug::Bug(int k, int s)
{
	x = k;
	y = s;
}
void Bug::set_position(int s, int m)
{
	this -> x=s;
	this -> y=m;
}
int Bug::get_x() const
{
	return x;
}
int Bug::get_y() const
{
	return y;
}

void Bug::reset()
{
   position = 0;
}
   void Bug::more_x()
   {
	   x=x+20;
   }
   void Bug::more_y()
   {
	   y=y+20;
   }
   void Bug::less_x()
   {
	   x=x-20;
   }
   void Bug::less_y()
   {
	   y=y-20;
   }
   
   
   void Bug::O (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim)
   {
	   for(int i=1; i <= 10; i++) 
	{
		x +20; 
		anim.add(bugpic, x, .25* HEIGHT+ y); 
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	
	for(int i=1; i <= 10; i++)
	{
		x-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		y-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	}
	
	void Bug::N (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim)
	{
		for(int i=1; i <= 10; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		y-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		y-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	}
	
	void Bug::I (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim)
	{
		for(int i=1; i <= 10; i++)
	{
		x+20; 
		anim.add(bugpic, x, .25* HEIGHT+y); 
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x-20; 
		anim.add(bugpic, x, .25* HEIGHT+y); 
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x-20; 
		anim.add(bugpic, x, .25* HEIGHT+y); 
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		x+20; 
		anim.add(bugpic, x, .25* HEIGHT+y); 
		anim.frame();
	}}
	
	void Bug::H (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim)
	{
		for(int i=1; i <= 10; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		y-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x+20; 
		anim.add(bugpic, x, .25* HEIGHT+y); 
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		y-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}}
	
	void Bug::F (int HEIGHT, int WIDTH, int SCALE, Picture bugpic, Animation &anim)
	{
		for(int i=1; i <= 5; i++)
	{
		x+20; 
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		x-20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		y+20;
		anim.add(bugpic, x, .25* HEIGHT+y);
		anim.frame();
	}}
		
	
