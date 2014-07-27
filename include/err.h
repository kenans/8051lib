#ifndef _ERR_H_
#define _ERR_H_

/**
 *  -----------------------------------------------------------------------
 *                                 Include
 *  -----------------------------------------------------------------------
 */
/**
 *  -----------------------------------------------------------------------
 *                           Constant and Types
 *  -----------------------------------------------------------------------
 */
typedef char err_t;

#ifndef ERR_OK
#define ERR_OK      0
#endif

#ifndef ERR_MEM
#define ERR_MEM     -1
#endif

#ifndef ERR_RANGE
#define ERR_RANGE   -2
#endif

#ifndef ERR_COMMON
#define ERR_COMMON  -3
#endif

#endif // _ERR_H_
