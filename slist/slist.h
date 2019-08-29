#ifndef _INCLUDED_SLIST_
#define _INCLUDED_SLIST_

#define SLIST_FAIL 0
#define SLIST_OK 1

#include<stdint.h>

typedef struct _node Node;
typedef struct _slist Slist;

struct _node {
	int32_t data;
	Node *next;
};

struct _slist {
	Node *head;
	Node *tail;
	uint32_t length;
	int SLIST_STATUS;
};

/**	Public Interface for coder     **/
Slist new_list();
uint32_t length(Slist *list);
int32_t lookup(Slist * list,int32_t data);
Slist* add_head(Slist *list,int32_t data);
Slist* add_tail(Slist *list,int32_t data);
Slist* delete_tail(Slist *list);
Slist* delete_head(Slist *list);
int32_t max_list(Slist *list);
int32_t min_list(Slist *list);

#endif
