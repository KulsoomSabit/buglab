#include "Bug.h"

int main()
{
    int random;
    const int HEIGHT = 500; //sets graph unit parameters for y axis
    const int WIDTH = 500; //sets graph unit parameters for x axis
    const int SCALE = 1; //sets for 1 unit each
    srand(time(0)); //random function
   random = rand() % 5 + 1; //
   Bug dean(20,20); //class object with bug name and starting position
   Picture bugpic("roach3.png"); //sets the picture thats downloaded into VM
    Animation anim ("animation.gif", WIDTH, HEIGHT); //creates animation object named anim with the gif picture to be used on graph
    if (random == 1)
    {
		dean.O; (HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
		dean.set_position(200,0);
		dean.N (HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
	}
	if (random == 2)
	{
		dean.O; (HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
		dean.set_position(200,0);
		dean.F (HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
	}
	if (random == 3)
	{
		dean.N (HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
		dean.set_position(200,0);
		dean.O; (HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
	}
	if (random = 4)
	{
		dean.O; (HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
		dean.set_position(200,0);
		dean.H(HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
	}
	if (random == 5)
	{
		dean.H(HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
		dean.set_position(200,0);
		dean.I(HEIGHT, WIDTH, SCALE, Picture bugpic, Animation anim);
	}
		
	anim.close();
	system("animate animation.gif");
	return 0;
}
		//if random number generated equals 1 then run this word
	/*for(int i=1; i <= 10; i++) //OF
	{
		dean.more_x(); //calls function that runs bug to the right on xaxis
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	
	for(int i=1; i <= 10; i++)
	{
		dean.less_x();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	} 
	dean.set_position(200,0); 
	for(int i=1; i <= 5; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.less_x();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_x();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.less_x();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	}
	
	
	if (random == 2){ //ON
		/*for(int i=1; i <= 10; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_x();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	} 
	dean.set_position(200,0); //N
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
} 


	if (random == 3){ //NO
	/*for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	dean.set_position(200,200);
	for(int i=1; i <= 10; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_x();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	} 
	
	
	if (random == 4){ //starts OH
		/*for(int i=1; i <= 10; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	
	for(int i=1; i <= 10; i++)
	{
		dean.less_x();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	dean.set_position(200,0); 
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
} 
	if(random == 5){ //HI
		/*for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.less_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	dean.set_position(200,0);
	for(int i=1; i <= 10; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.less_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.more_y();
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y());
		anim.frame();
	}
	for(int i=1; i <= 5; i++)
	{
		dean.less_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}
	for(int i=1; i <= 10; i++)
	{
		dean.more_x(); 
		anim.add(bugpic, dean.get_x(), .25* HEIGHT+dean.get_y()); 
		anim.frame();
	}		
	} */
	
   
