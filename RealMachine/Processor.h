#pragma once
class Processor
{
public:
	Processor(int _PRT, int _R, int _IC, int _SF );
	~Processor();
private:
	int prt_reg;
	int r_reg;
	int ic_reg;
	int sf_reg;
	int MODE;
	int PI;
	int SI;
	int TI;
};

