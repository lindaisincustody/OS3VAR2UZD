#pragma once
class UserMemory
{
public:
	UserMemory(int memory);
	~UserMemory();
	void Read();
	void Write();

private:
	int _memory;

};

