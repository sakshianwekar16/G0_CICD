/*
 * structs.h
 *
 *  Created on: Oct 18, 2024
 *      Author: pc
 */
#include "stdint.h"
#include "define.h"
#ifndef INC_STRUCTS_H_
#define INC_STRUCTS_H_

typedef struct {
   uint32_t rawADCValues[4];
} HOST_VAR_t;
extern HOST_VAR_t HostVar;


#define DISPLAY_RXBUF_SIZE 20
typedef struct {

	uint8_t source;
	uint8_t rxBuf[DISPLAY_RXBUF_SIZE];
	uint8_t rawData[DISPLAY_RXBUF_SIZE];
	uint8_t packetdropped;
} COMMUNICATION_VAL_t;
extern COMMUNICATION_VAL_t Communication;

#endif /* INC_STRUCTS_H_ */
