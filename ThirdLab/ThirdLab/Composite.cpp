#include "Composite.h"

void Composite::AddComponent(Component* component)
{
	children.push_back(std::shared_ptr<Component>(component));
	component->SetParent(this);
}

void Composite::RemoveComponent(Component* component)
{
	children.remove(std::shared_ptr<Component>(component));
	component->SetParent(nullptr);
	delete component;
}

bool Composite::IsComposite() const
{
	return true;
}

void Composite::OutputInformation()
{
	ToString();
	for (std::shared_ptr<Component>& i : children)
	{
		i->OutputInformation();
	}
}

size_t Composite::GetTotalWeight() const
{
	size_t totalWeight = 0;
	for (const std::shared_ptr<Component>& i : children)
	{
		totalWeight += i->GetBaggageWeight();
	}
	return totalWeight;
}
