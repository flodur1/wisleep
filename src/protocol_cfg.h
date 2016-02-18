/*
 * protocol_cfg.h
 *
 *  Created on: Feb 16, 2016
 *      Author: petera
 */

#ifndef _PROTOCOL_CFG_H_
#define _PROTOCOL_CFG_H_

#include "system.h"
#include "miniutils.h"

#define CFG_UMAC_RETRIES             10
#define CFG_UMAC_RETRY_DELTA         40
#define CFG_UMAC_RX_TIMEOUT          2*CFG_UMAC_RETRY_DELTA*CFG_UMAC_RETRIES
#define CFG_UMAC_TICK_TYPE           time
#define CFG_UMAC_DBG(...) DBG(D_COMM, D_DEBUG, "UM " __VA_ARGS__ )

#endif /* _PROTOCOL_CFG_H_ */