#include"Game.h"
int main()
{
    Game game;
    SubElementLayout boxGoalWallSubElementLayout{};
    boxGoalWallSubElementLayout.name = "position";
    boxGoalWallSubElementLayout.type = ElementType::Vector;
    boxGoalWallSubElementLayout.vectorLength = 2;
    ArrayLayout boxGoalArrayLayout{};
    boxGoalArrayLayout.arrayFlag = ARRAY_FLAG_EXISTENCE_IMMUTABLE_BIT;
    boxGoalArrayLayout.subElementCount = 1;
    boxGoalArrayLayout.pSubElementLayouts = &boxGoalWallSubElementLayout;
    ArrayLayout wallArrayLayout{};
    wallArrayLayout.arrayFlag = ARRAY_FLAG_EXISTENCE_IMMUTABLE_BIT |
        ARRAY_FLAG_VALUE_IMMUTABLE_BIT;
    wallArrayLayout.subElementCount = 1;
    wallArrayLayout.pSubElementLayouts = &boxGoalWallSubElementLayout;
    ElementLayout elementLayouts[4]{};
    // Player Position Layout
    elementLayouts[0].name = "playerPos";
    elementLayouts[0].duplicate = false;
    elementLayouts[0].type = ElementType::Vector;
    elementLayouts[0].pArrayLayout = nullptr;
    elementLayouts[0].vectorLength = 2;
    // Box Layout
    elementLayouts[1].name = "boxes";
    elementLayouts[1].duplicate = false;
    elementLayouts[1].type = ElementType::Array;
    elementLayouts[1].pArrayLayout = &boxGoalArrayLayout;
    elementLayouts[1].vectorLength = 0;
    // Goal Layout
    elementLayouts[2].name = "goals";
    elementLayouts[2].duplicate = false;
    elementLayouts[2].type = ElementType::Array;
    elementLayouts[2].pArrayLayout = &boxGoalArrayLayout;
    elementLayouts[2].vectorLength = 0;
    // Wall Layout
    elementLayouts[3].name = "walls";
    elementLayouts[3].duplicate = false;
    elementLayouts[3].type = ElementType::Array;
    elementLayouts[3].pArrayLayout = &wallArrayLayout;
    elementLayouts[3].vectorLength = 0;
    ChessboardLayout chessboardLayout{};
    chessboardLayout.elementCount = 4;
    chessboardLayout.pElementLayouts = elementLayouts;

    // Structures for configuring ChessboardStatus
    int playerPosValues[] = { 3,4 };//Player Pos Value
    VectorValue playerPosValue{};
    playerPosValue.elementCount = 2;
    playerPosValue.pValues = playerPosValues;

    SubElementValues boxesSubElementValues{};
    boxesSubElementValues.name = "position";
    boxesSubElementValues.type = ElementType::Vector;
    boxesSubElementValues.pValueStructs = nullptr;//to do
    boxesSubElementValues.elementCount = 0;//to do
    ArrayValue boxesValue{};
    boxesValue.name = "boxes";
    boxesValue.arrayLength = 2;
    boxesValue.subElementCount = 1;
    boxesValue.pSubElementValues = &boxesSubElementValues;
    ElementValue elementValues[4]{};
    //Player Position Value
    elementValues[0].name = "playerPos";
    elementValues[0].duplicated = false;
    elementValues[0].type = ElementType::Vector;
    elementValues[0].pValueStruct1 = &playerPosValue;
    elementValues[0].pValueStruct2 = nullptr;
    //Boxes Value
    elementValues[1].name = "boxes";
    elementValues[1].duplicated = false;
    elementValues[1].type = ElementType::Array;
    elementValues[1].pValueStruct1 = &boxesValue;
    elementValues[1].pValueStruct2 = nullptr;
    //Goals Value
    //to do
    ChessboardStatus chessboardStatus{};
    chessboardStatus.elementCount = 4;
    chessboardStatus.pElementValues = elementValues;
    GameCreateInfo createInfo{};
    createInfo.allowPass = false;
    createInfo.gameName = "Push Box Game";
    createInfo.pChessboardLayout = &chessboardLayout;
    createInfo.pChessboardStatus = &chessboardStatus;
    game.ConfigureGameInfo(&createInfo);



    std::cout << "Hello World!\n";
}
