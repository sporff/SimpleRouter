#pragma once
#include "RouterObject.h"
class ConveyorBase :
	public RouterObject
{
public:
	ConveyorBase(std::string id);
	~ConveyorBase()=0;

	std::string getId();
private:
	std::string m_id;
};

using ConveyorBaseSharedPtr = std::shared_ptr<ConveyorBase>;