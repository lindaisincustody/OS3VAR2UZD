#pragma once
class Flash
{
public:
	Flash();
	~Flash();
	void Read();
	void Write();

private:

	int _memory;
};

