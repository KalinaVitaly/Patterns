#pragma once
class Component
{
public:
	Component() = default;
	virtual ~Component() = default;
public:
	void SetParent(Component *_parent);
	Component* GetParent();
public:
	virtual void AddComponent(Component* component) {};
	virtual void RemoveComponent(Component* component) {};
	virtual size_t GetBaggageWeight() const {};
	virtual bool IsComposite() const;
protected:
	Component* parent;
};

