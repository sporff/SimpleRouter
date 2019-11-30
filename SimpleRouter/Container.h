#pragma once
#include "RouterObject.h"
class Container :
	public RouterObject
{
public:
	Container();
	virtual ~Container();

	std::string getId();
private:
	std::string m_id;
};

using ContainerSharedPtr = std::shared_ptr<Container>;