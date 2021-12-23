module;

#include <iostream>

export module ModulePartition:ModulePartition1;

export void ModulePartitionTest1()
{
	std::cout << "ModulePartition1" << std::endl;
}