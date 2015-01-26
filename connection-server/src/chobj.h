/*
 * In The Name Of God
 * ========================================
 * [] File Name : chobj.h
 *
 * [] Creation Date : 25-01-2015
 *
 * [] Last Modified : Mon Jan 26 18:48:31 2015
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#ifndef CHOBJ_H
#define CHOBJ_H

struct chobj {
	char id[255];
	GSList *child;

	int fd;
	struct sockaddr_in client_addr;
};

struct chobj *chobj_new(const char *id, int socket,
		struct sockaddr_in addr);
void chobj_del(struct chobj *chobj);
void chobj_add_child(struct chobj *parent,
		struct chobj *child);
void chobj_del_child(struct chobj *parent,
		struct chobj *child);

#endif
