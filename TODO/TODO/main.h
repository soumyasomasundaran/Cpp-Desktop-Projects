#pragma once
#include <string>
#include <list>
#include <Windows.h> // Include Windows.h for LPWSTR

class main
{
private:
	std::list<LPWSTR> tasksList[100];
public:
	main()
	{

	}
	void addTask(LPWSTR task);
	void deleteTask(LPWSTR task);
	void deleteTask(LPWSTR oldTask, LPWSTR updatedTask);
};

