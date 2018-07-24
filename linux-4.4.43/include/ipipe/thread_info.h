#ifndef _IPIPE_THREAD_INFO_H
#define _IPIPE_THREAD_INFO_H

/*
 * Placeholder for private thread information defined by client
 * domains.
 */

struct ipipe_threadinfo { void *ptd[4];
};

static inline void __ipipe_init_threadinfo(struct ipipe_threadinfo *p) { p->ptd[0] = p->ptd[1] = p->ptd[2] = p->ptd[3] = 0; }

#endif /* !_IPIPE_THREAD_INFO_H */
