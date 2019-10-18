#include "print_on_screen.h"
#include <string.h>

/*
    Changes the color you are printing with to the color given by the string argument
*/
int change_color(char *foreground_color, char *background_color){
    char *foreground_color_code = "30";
    char *background_color_code = "40";

    if(!strcmp(background_color, "black")) background_color_code = "30";
    else if(!strcmp(background_color, "red")) background_color_code = "31";
    else if(!strcmp(background_color, "green")) background_color_code = "32";
    else if(!strcmp(background_color, "yellow")) background_color_code = "33";
    else if(!strcmp(background_color, "blue")) background_color_code = "34";
    else if(!strcmp(background_color, "magenta")) background_color_code = "35";
    else if(!strcmp(background_color, "cyan")) background_color_code = "36";
    else if(!strcmp(background_color, "white")) background_color_code = "37";

    if(!strcmp(foreground_color, "black")) foreground_color_code = "40";
    else if(!strcmp(foreground_color, "red")) foreground_color_code = "41";
    else if(!strcmp(foreground_color, "green")) foreground_color_code = "42";
    else if(!strcmp(foreground_color, "yellow")) foreground_color_code = "43";
    else if(!strcmp(foreground_color, "blue")) foreground_color_code = "44";
    else if(!strcmp(foreground_color, "magenta")) foreground_color_code = "45";
    else if(!strcmp(foreground_color, "cyan")) foreground_color_code = "46";
    else if(!strcmp(foreground_color, "white")) foreground_color_code = "47";
        

    return printf("%c[%s;%sm", 27, foreground_color_code, background_color_code);

}

/*
    Changes the custor to the given position
*/
int change_cursor(Position position){
    int x = position.x;
    int y = position.y;

    printf ( "\033[%d;H");
    
};