#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog details
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * 
 * Return
*/

struct dog {
    char *name;
    char *owner;
    float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif