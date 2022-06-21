#pragma once
enum class Player
{
	Me,
	Opponent
};
enum class WhoseTurn
{
	MyTurn,
	OpponentsTurn
};
enum class Whose
{
	Mine,
	Opponents
};
enum class ElementType
{
	Scalar,
	Vector,
	Array
};
enum class BooleanStatementType
{
	ScalarWRTConstexpr,
	VectorWRTConstexpr,
	ArrayWRTConstexpr,
	ScalarWRTScalar,
	VectorWRTVector,
	ArrayWRTArray,
	ArraySatisfyCountWRTConstexpr,
	ArraySizeWRTArraySize,
	ArraySatisfyCountWRTArraySatisfyCount,
	ArrayExistSatisfy,
	ArrayAllSatisfy,
	ArraySubElementsWRTArraySubElements
};
enum class Relationship
{
	Equal,
	NotEqual,
	GreaterThan,
	LessThan,
	GreaterThanOrEqualTo,
	LessThanOrEqualTo
};
enum class BenefitType
{
	WinOrLose,
	Consistent	
};
enum class AccessFlag
{
	Public, //Both you and your opponent can change it with direct operations
	OwnerDirectAccess, //If the variable is yours, only you can change it directly, but your opponent may change it through indirect operations. Vice versa.
	OwnerDirectAccessExclusive, //Same as OwnerDirectAccess but opponent can not change it with any approach.
	Implicit, //Both you and your opponent can only change it with indirect operations.
	OwnerIndirectAccess, //Even if the variable is yours, you can only change it with indirect operations i.e. through system operations, and opponent can not change it.
	Closed //This variable is not changeable and will remain constant forever
};
enum class ArrayFlag
{
	Fixed = 0,
	InsertBit = 1,
	EraseBit = 2,
};