#include "pch.h"
#include "Container.h"


Container::Container(std::string id)
{
	m_id = id;
}


Container::~Container()
{
}

std::string Container::getId()
{
	return m_id;
}
