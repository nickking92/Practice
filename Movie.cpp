#include "Movie.h"
#include <iostream>
#include "Movies.h"

Movie::Movie() :Movie("", 0, 0)
{
	
}


Movie::Movie(std::string name_val, int rating_val, int watched_val)
	:name(name_val),rating(rating_val),watched(watched_val)
{
	
}

Movie::~Movie()
{
}

void Movie::displayMovie()
{
	std::cout <<getName()<<getRating()<<getWatched() << std::endl;
}


