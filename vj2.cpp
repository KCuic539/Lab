#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 50

struct _person;
typedef _struct* position;
typedef struct _struct
{
	//ime
	char name[MAX_SIZE];
	char lastName[MAX_SIZE];
	int birthYear;

	position next;
}Person;

int AddBegin();
int PrintList(position first);
int PrependList(position head, char*, char*, int);
int AppendList(position head, char*, char*, int);
position FindLast(position head);
int InsertAfter(position prev, position newPerson);
position FindByLastName(position first, char*);
int Delete(position head, char*);
position FindPrev(position head, char*);

int main()
{
	Person head = {};
	head.name = {0};
	head.lastName = {0};
	head.birthYear = 0;
	return 0;
}

position CreatePerson(char* name, char* lastName, int birthYear)
{
	{

	}
	return newPerson;
}

int PrependList(position head, char* name, char* lastName, int birthYear)
{
	position newPerson = NULL;
	newPerson = CreatePerson(name, lastName, birthYear);
	if (!newPerson)
	{
		printf("Failed in person creation!");
		return -1;
	}

	newPerson->next = head->next;
	head->next = newPerson;

	return EXIT_SUCCESS;

}

int PrintList(position first)
{
	position temp = NULL;
	temp = first;
	while (temp != NULL)
	{
		printf("%s %s %d", temp->name, temp->lastName, temp->birthYear);
		temp = temp->next;
	}

	return EXIT_SUCCESS;
}

int AppendList(position head, char*, char*, int)
{
	position newPerson = NULL;
	newPerson = CreatePerson(name, lastName, birthYear);
	if (!newPerson)
	{
		printf("Failed in person creation!");
		return -1;
	}

	last = FindLast(head);

	newPerson->next = last->next;
	last->next = newPerson;

}

position FindLast(position head)
{
	position last = NULL;
	last = head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	return last;
}

int InsertAfter(position prev,)

position FindByLastName(position first, char* lastName)
{
	position temp = NULL;

	temp = first;
	while (temp)
	{
		if (strcmp(lastName, temp->lastName) == 0) 
		{
			return temp;
		}
			
		temp = temp->next;
	}

	return NULL;
}

int Delete(position head, char* name)
{
	position prev = NULL;
	position toDelete = NULL;

	prev FindPrev(head, name);

	toDelete = prev->next;


	return EXIT_SUCCESS;
}

position FindPrev(position head, char* name)
{
	position temp = head;
}