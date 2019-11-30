#pragma once
#include "ConveyorBase.h"
class BasicConveyor :
	public ConveyorBase
{
public:
	BasicConveyor(std::string id);
	~BasicConveyor();
};

using BasicConveyorSharedPtr = std::shared_ptr<BasicConveyor>;