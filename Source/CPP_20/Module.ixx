
#include <iostream>

export module Module;

// sub module
export import Module.SubModule; // ������ : �������ϰ� �İ��� import ����
export import ModulePartition; // ��Ƽ�� : ������ ������ module�� import�ؾ� ��Ƽ�� ������ �� �� ���� 

/* Module�� ����ϴ� ��� */

// 1) �Լ� �տ� export
export int Add1(int a, int b)
{
	return a + b;
}

// 2) export�� ���
export
{
	int Add2(int a, int b)
	{
		return a + b;
	}
}

// 3) export�� namespace
export namespace ExAddTest
{
	int Add3(int a, int b)
	{
		return a + b;
	}
}

export namespace Test
{
	void ProcessModuleTest()
	{
		std::cout << "==========  Module ==========" << std::endl;

		SubModuleFunc();
		ModulePartitionTest1();
		ModulePartitionTest2();

		std::cout << "=============================" << std::endl << std::endl;
	}
}