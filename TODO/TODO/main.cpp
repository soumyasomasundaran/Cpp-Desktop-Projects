#include "main.h"
using namespace std;
int numTasks = 0;
#include <Windows.h> // Include Windows.h for LPWSTR

void main::addTask(LPWSTR task)
{
	tasksList->push_back(task);
}

void main::deleteTask(LPWSTR task)
{
	auto t= std::find(tasksList->begin(), tasksList->end(), task);
	if (t != tasksList->end()) {

		tasksList->erase(t);
	}
}

void main::deleteTask(LPWSTR oldTask, LPWSTR updatedTask)
{
	auto t = std::find(tasksList->begin(), tasksList->end(), oldTask);
	if (t != tasksList->end()) {

		*t = updatedTask;

	}
}

