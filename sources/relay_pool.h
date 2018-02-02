#ifndef OD_RELAY_POOL_H
#define OD_RELAY_POOL_H

/*
 * Odissey.
 *
 * Advanced PostgreSQL connection pooler.
*/

typedef struct od_relaypool od_relaypool_t;

struct od_relaypool
{
	od_relay_t *pool;
	int         round_robin;
	int         count;
};

void od_relaypool_init(od_relaypool_t*);
int  od_relaypool_start(od_relaypool_t*, od_system_t*, int);
void od_relaypool_feed(od_relaypool_t*, machine_msg_t*);

#endif /* OD_RELAY_POOL_H */
