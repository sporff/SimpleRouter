#pragma once
#include "RouterObject.h"
class Container :
	public RouterObject
{
public:
	Container(std::string id);
	virtual ~Container();

	std::string getId();
private:
	std::string m_id;
	// path
	// current 
};

using ContainerSharedPtr = std::shared_ptr<Container>;