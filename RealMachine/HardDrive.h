#pragma once
class HardDrive
{
public:
	HardDrive();
	~HardDrive();
	void Read();
	void Write();

private:

	int _memory;
};