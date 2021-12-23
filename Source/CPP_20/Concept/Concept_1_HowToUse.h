#pragma once
#include "../TestExecute/ITestExecute.h"

class Concept1TestExecute : public ITestExecute
{
public:
	Concept1TestExecute() = default;
	virtual ~Concept1TestExecute() = default;

	virtual void Execute() override;
};