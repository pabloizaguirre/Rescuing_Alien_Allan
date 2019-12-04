
#ifndef PEOPLE_H
#define PEOPLE_H
#include "types.h"
#include "map.h"
#include <stdio.h>


typedef struct {
    char character;
    Position position;
    State state;
    int wait;
} People;

/*Allocates memory for a person*/

People* create_people(char character, Position position, State state, int wait);

/* This functions receive a pointer to people and */
/* return a certain atribute of that character.   */

Position People_get_position(People *p);
State People_get_state(People *p);

/* Return a certain atribute of a person*/

int People_set_character(People *p, char c);
int People_set_position(People *p, Position position);
int People_set_state(People *p, State state);

/*Updates the position of a person depending on the map. Returns 1 if
it moves, 0 if it doesnt't, -1 if error.*/

int people_update(People *p, Level *level, Screen *screen);

/* Prints the people */
Result print_people(Level *level, Screen *screen);

/*Frees the memory allocated for a person*/

int free_people(Level *level);



#endif
