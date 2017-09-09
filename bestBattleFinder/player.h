#ifndef DEF_PLAYER

	#define DEF_PLAYER
	#include "army.h"
	
	#define BUDGET 10000
	#define LESS_EXPENSIVE_COST 20
	
	typedef struct Player Player;
	struct Player{
		Army army;
		int budget;
	}
	

#endif
