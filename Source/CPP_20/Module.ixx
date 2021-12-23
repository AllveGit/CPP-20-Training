/*
	Microsoft Docs : https://docs.microsoft.com/ko-kr/cpp/cpp/modules-cpp?view=msvc-170
	Detail : https://openmynotepad.tistory.com/78
	Reference : https://velog.io/@kjh3865/%EB%B9%8C%EB%93%9C%EC%BB%B4%ED%8C%8C%EC%9D%BC-%EC%8B%A4%ED%96%89-%EA%B3%BC%EC%A0%95

	���� ����
	1) ��ó��
	- #include, #define ���� ��ó�������� ó��
	2) ������
	������Ʈ���� .obj�� �����ϴ� �ܰ�
	3) ��ŷ
	.lik ������ �����ϸ� �ɺ��� ���� ����� ������ �����ϴ� �ܰ�

	�ܰ踦 ��ġ�⿡ ����ӵ��� �ʹ� ������, �ɺ��� �ߺ����� ���ǵǰ� ��ũ�� �νĿ� ���� �ٸ� ����� ��µǱ⵵ ��.

	Module
	- �� �ѹ��� import��, import ������ ���X
	- �ѹ��� import�Ǳ⿡ �ɺ� �ߺ� ���ǰ� �ȵ�
	- .h .cpp �и��Ͽ� ������ �ʿ䰡 ������
*/

// global module fragment : ��� ������ �������ϱ����� ���� �������ؾ��� ���� �ڵ尡 �ִٴ� ���� �����Ϸ��� �˸��� ����
module;

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