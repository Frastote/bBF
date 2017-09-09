#ifndef DEF_ARMY

	#define DEF_ARMY
	#include "units.h"
	
	#define LIMIT 1000
	#define NB_MAX_UNITS 10
	#define MAX_LENGTH 1000
	typedef struct Army Army;
	struct Army{
		Unit units[100];
		int limit;
	};
		
	int rand_a_b(int a, int b);
	void addUnit(Unit unit, Army army);

#endif
