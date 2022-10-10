#ifndef DOG
#define DOG

/**
 * struct dog - dog struct
 * @name: its name
 * @age: its age
 * @owner: its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);                    void print_dog(struct dog *d);                                                       dog_t *new_dog(char *name, float age, char *owner);                                  void free_dog(dog_t *d);

#endif /*DOG*/
