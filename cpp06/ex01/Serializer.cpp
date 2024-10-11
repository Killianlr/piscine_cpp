
#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer &tmp) { *this = tmp; }

Serializer &Serializer::operator=(__attribute__((unused))const Serializer &rhs) {return (*this); }

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}