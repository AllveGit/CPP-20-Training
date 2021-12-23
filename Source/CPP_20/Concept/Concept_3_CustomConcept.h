#pragma once
#include "../TestExecute/ITestExecute.h"

class Concept3TestExecute : public ITestExecute
{
public:
	Concept3TestExecute() = default;
	virtual ~Concept3TestExecute() = default;

	virtual void Execute() override;
};