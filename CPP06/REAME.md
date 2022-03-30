const_cast<type> (expr) − The const_cast operator is used to explicitly override const and/or volatile in a cast. The target type must be the same as the source type except for the alteration of its const or volatile attributes. This type of casting manipulates the const attribute of the passed object, either to be set or removed.

dynamic_cast<type> (expr) − The dynamic_cast performs a runtime cast that verifies the validity of the cast. If the cast cannot be made, the cast fails and the expression evaluates to null. A dynamic_cast performs casts on polymorphic types and can cast a A* pointer into a B* pointer only if the object being pointed to actually is a B object.

reinterpret_cast<type> (expr) − The reinterpret_cast operator changes a pointer to any other type of pointer. It also allows casting from pointer to an integer type and vice versa.

static_cast<type> (expr) − The static_cast operator performs a nonpolymorphic cast. For example, it can be used to cast a base class pointer into a derived class pointer.

https://www.cplusplus.com/doc/oldtutorial/typecasting/

https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/concepts/serialization/#:~:text=Serialization%20is%20the%20process%20of,reverse%20process%20is%20called%20deserialization.

https://stackoverflow.com/questions/351845/finding-the-type-of-an-object-in-c