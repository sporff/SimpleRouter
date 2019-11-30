#pragma once
class Router
{
public:
	Router();
	~Router();

	ConveyorBaseSharedPtr addConveyor(ConveyorBaseSharedPtr newConveyor);
	ContainerSharedPtr addContainer(ContainerSharedPtr newContainer);

private:
	std::unordered_map<std::string, ConveyorBaseSharedPtr> m_conveyors;
	std::unordered_map<std::string, ContainerSharedPtr> m_containers;
};

