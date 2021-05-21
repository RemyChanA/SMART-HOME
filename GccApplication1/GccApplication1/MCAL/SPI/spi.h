/*
 * spi.h
 *
 * Created: 5/16/2021 2:33:46 PM
 *  Author: ASAH2
 */ 


#ifndef SPI_H_
#define SPI_H_

void spiMasterInit();
void spiSlaveInit();
void spiTransmit(unsigned char data);
unsigned char spiRcieve();



#endif /* SPI_H_ */