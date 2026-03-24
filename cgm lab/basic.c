/*

gd is graphic driver 
gm = graphoc mode 

init graph is used to plot the figure
close graph


detect is a mcacro which is stored in the graphic driver header file


init sets the default 

get pixle returns the colour of pixel present at location x y 

getx returns x coordinate 

get y returns y coordinate

outtext display text and string 

outtextxy display text and string with coordinates 

floodfill(int x int y , colour name)

setbkcolor(color name)



*/


#include <bits/stdc++.h>


int main(int argc, char const *argv[])
{
    int gd =DETECT , gm ;
    initgraph(&gd , &gm , "path ");
    // this function automatically decides an apporpriate graphics driver and mode 
    // it contains three arguments 
    //  adrrees of gt adress ofg gm and third is t epath where the bgi files are present 
getch();
// shows output on the console untill and unless 
closegrah();
// it closes a graphic mode 
    return 0;
}


