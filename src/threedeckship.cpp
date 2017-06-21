#include "threedeckship.h"

ThreeDeckShip::ThreeDeckShip()
{
    size_ = THREE_DECK_SHIP_SIZE;

    PartOfShip partOfShip;

    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);

}

ThreeDeckShip::~ThreeDeckShip()
{

}

bool ThreeDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

bool ThreeDeckShip::setCoordinates(std::stack<std::pair<int, int> >& coordinates)
{
    return Ship::setCoordinates(coordinates);
}

std::vector<std::pair<int, int> > ThreeDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
