#pragma once
#include "ConveyorBase.h"
class BasicConveyor :
	public ConveyorBase
{
public:
	BasicConveyor(std::string id);
	~BasicConveyor();

	//static std::shared_ptr<BasicConveyor> make_BasicConveyor(std::string id);
};

using BasicConveyorSharedPtr = std::shared_ptr<BasicConveyor>;