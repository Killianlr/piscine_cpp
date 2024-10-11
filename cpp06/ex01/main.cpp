#include "Serializer.hpp"

int main(void)
{
    Data    data;
    Data    *dptr = new Data;

    data.value = "bonjour";
    dptr->value = "bonsoir";

    std::cout << "Before serialization : " << std::endl;
    std::cout << "data.value : " << data.value << std::endl;
    std::cout << "addr : " << &data << std::endl;
    std::cout << "dptr->value : " << dptr->value << std::endl;
    std::cout << "addr : " << &dptr << std::endl;

    std::cout << "after serialization : " << std::endl;
    std::cout << "data.value : " << Serializer::deserialize(Serializer::serialize(&data))->value << std::endl;
    std::cout << "addr :" << Serializer::deserialize(Serializer::serialize(&data)) << std::endl;
	std::cout << "dptr->value :" << Serializer::deserialize(Serializer::serialize(dptr))->value << std::endl;
	std::cout << "addr :" << Serializer::deserialize(Serializer::serialize(dptr)) << std::endl;

    delete dptr;
}