#pragma once
class Channel
{
public:
	Channel();
	~Channel();
	void Read();
	void Write();
private:

	int LD;
	int LR;
	int SR;
	int SD;
};

