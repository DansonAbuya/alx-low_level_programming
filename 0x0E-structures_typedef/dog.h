#ifndef _MYHEADER_
#define _MYHEADER_

/**
  * struct dog - the  attributes
  * @name: name of the dog.
  * @age:  age of the dog.
  * @owner: owner of the dog.
  *
  */ 
struct dog
{char *name;
float age;
char *owner;
};

/**
 * dog - Typedef for dog structure
 */
typedef struct dog dog1;

void initialize_dog(struct dog *d, char *name, float age, char *owner);
void outputt_dog(struct dog *d);
dog1 *new_dog(char *name, float age, char *owner);
void free_dog(dog1 *d);
#endif
