#pragma once
#include "RouterObject.h"

class ConveyorBase;
using ConveyorBaseSharedPtr = std::shared_ptr<ConveyorBase>;

class ConveyorBase :
	public RouterObject
{
public:
	ConveyorBase(std::string id);
	~ConveyorBase()=0;

	std::string getId();
	virtual bool isSynchronous(std::string conv1, std::string conv2)=0;

	/*ConveyorBaseSharedPtr addConnection(ConveyorBaseSharedPtr newConnection);
	bool removeConnection(std::string removeConnection);
	ConveyorBaseSharedPtr getConnection(std::string connection);*/

private:
	std::string m_id;

	// list of connections
	//std::unordered_map<std::string, ConveyorBaseSharedPtr> m_connections;
};