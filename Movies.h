#pragma once
#include "Movie.h"
#include <vector>
class Movies
{
public:
	Movies(std::vector<Movie> x);
	Movies(const Movies& m);
	Movies(Movies && m)noexcept;
	~Movies();
	Movie m;
	std::vector<Movie> *movies;
	bool addMovie(std::string name,int rating, int watched);
	bool incrementWatched(std::string& name);
	void displayMovies();
};

