/*
 * Interface_example_softArm.cpp
 *
 *  Created on: Jan 16, 2019
 *      Author: Xiaojiao Chen
 *		 Email: chen2014@connect.hku.hk
 *	Laboratory: Bio-Control Lab
 * Orgnization: the University of Hong Kong
 */

#include <PneumaticPlatform.h> // always include this header in your own code.
#include "SoftArm.h"


SOFT_ARM softArm;

void setup()
{
	softArm.setup();

}

void loop()
{
	softArm.loop();

}

void serialDisplay()
{
	softArm.display();
}

void serialCommandCallback(char *pSerialReceiveBuffer)
{
	softArm.receiveCommand(pSerialReceiveBuffer);
}

void wirelessCommandCallback(char *pWirelessReceiveBuffer)
{
	softArm.receiveCommand(pWirelessReceiveBuffer);
}

void clickButtonCallback(int Button_Interrupt_Pin)
{

}
void serialPort4Callback(char *pbuffer)
{
	softArm.readIMU(pbuffer);
}