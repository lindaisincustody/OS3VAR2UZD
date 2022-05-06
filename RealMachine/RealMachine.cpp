#include <iostream>
#include "Processor.h"
#include "UserMemory.h"
#include "Paging.h"
#include "Channel.h"
#include "Flash.h"
#include "HardDrive.h"
#include "Printer.h"
using namespace std;

int main()
{
	//PTR, R, IC, SF mem
	Processor Processor(4,4,2,4);
	//blocks
	UserMemory UserMemory(81);
	Paging Paging();
	Channel Channel();
	Flash Flash();
	HardDrive HardDrive();
	Printer Printer();
	
}

