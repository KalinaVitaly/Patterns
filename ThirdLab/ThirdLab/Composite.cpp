#include "Composite.h"

void Composite::AddComponent(Component* component)
{
	childrens.push_back(component);
	component->SetParent(this);
}

void Composite::RemoveComponent(Component* component)
{
	childrens.remove(component);
	component->SetParent(nullptr);
	delete component;
}

bool Composite::IsComposite() const
{
	return true;
}
