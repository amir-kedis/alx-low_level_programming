#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* ------------------------------- */
/* ----- FUNCTION PROTOTYPES ----- */
/* ------------------------------- */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
