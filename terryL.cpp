//3350
//author: Terry langhardt
//date: 2/22/18
//comment
//project file for movement using the walk framework.
//#include "walk.cpp"
#include "fonts.h"
extern Rect r;

void name1(int x, unsigned int c)
{
    ggprint8b(&r, x, c, "Terry Langhardt");
}

void walk(int *walk,int *hold)
{
    *walk=1;
    *hold=1;
}

//void phy2(int &walkFrame,Timers timers)
//{
////man is walking...
                ////when time is up, advance the frame.
                //timers.recordTime(&timers.timeCurrent);
                //double timeSpan = timers.timeDiff(&timers.walkTime, &timers.timeCurrent);
                //if (timeSpan > .01) {
                        ////advance
                        //++walkFrame;
                        //if (walkFrame >= 16)
                                //g.walkFrame -= 16;
                        //timers.recordTime(&timers.walkTime);
                //}
//}

void walkBack(int *walk_back,int *hold)
{
    *walk_back=1;
    *hold=1;
}

void jump()
{
}
