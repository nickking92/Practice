#include "Movies.h"
#include <iostream>

bool Movies::addMovie(std::string name, int rating, int watched)
{
	m.name= name;
	m.rating = rating;
	m.watched = watched;

		for(Movie m: *movies)
		{

			if(m.name==name)
			{
				return false;
			}
	
		}
		Movie temp(name, rating, watched);
		movies->push_back(temp);
		return true;
}

bool Movies::incrementWatched(std::string& name)
{
	for (Movie& movie : *movies) {
		if (movie.name == name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


Movies::Movies(std::vector<Movie> m)
{
	movies = new std::vector<Movie>;
	*movies = m;
}

Movies::Movies(const Movies& m):Movies(*m.movies)
{
	std::cout <<"copy constructor" << std::endl;		//copy constructor
}


Movies::Movies(Movies&& m) noexcept
	: movies{ m.movies } 
{
		m.movies = nullptr;
}

Movies::~Movies()
{
	delete movies;
}

void Movies::displayMovies()
{
	if(movies->size()==0)
	{
		std::cout<<"No movies to display!"<<std::endl;
	}
	for(Movie& m : *movies)
	{
		std::cout << m.getName() << std::endl;
		std::cout << m.getRating() << std::endl;
		std::cout << m.getWatched() << std::endl;
	}

}
