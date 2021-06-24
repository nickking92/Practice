#pragma once
#include <string>
class Movie
{
	friend class Movies;
public:
	Movie();
	Movie(std::string name, int rating,int watchCount);
	~Movie();
	std::string getName() const { return name; };
	//void setName(std::string name_val) { this->name = name_val;}
	int getRating() const  { return rating; };
	//void setRating(int rating_val) { this->rating = rating_val; }
	int getWatched() const { return watched; };
	//void setWatched(int watched_val) { this->watched = watched_val; }
	void displayMovie();
private:
	std::string name;
	int rating = 0;
	int watched;
	
};

