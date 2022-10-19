/*Axente Andrei Udemy Section Challange OOP*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Movie {
private:
    string name;
    string rating; // (G, PG, PG-13, R)
    int watched;
public:
    Movie(string name, string rating, int watched) : name{name}, rating{rating}, watched{watched} {}
    void setName(string name) {this->name = name;}
    string getName() const {return name;}
    
    
    void setRating(string rating) {this->rating = rating;}
    string getRating() const {return rating;}
    
    void setWatched(int watched) {this->watched = watched;}
    int getWatched() const {return watched;}
    
    void incrementWatched() {++watched;}
    
    void displayMovie() const {
        cout << name << "," << rating << "," << watched << endl;
    }
    
    ~Movie() {}
};

class Movies {
private:
    vector <Movie> movies;
public:
    Movies() {}
    
    bool addMovie(string name, string rating, int watched) {
        for (const Movie &movie:movies) {
            if (name == movie.getName()) {
                return false;
            }
        }
        movies.push_back(Movie(name,rating,watched));
        return true;
    }
    
    bool incrementWathced(string name) {
        for (Movie &movie:movies) {
            if (name == movie.getName()) {
                movie.incrementWatched();
                return true;
            }
        }
        return false;
    }
    
    void display() const {
        if(movies.size() == 0)
            cout << "Nu exista filme in lista!" << endl;
        else
            for (auto movie:movies)
                movie.displayMovie();
        cout << endl;
    }
    
    ~Movies() {}
};

void addMovie(Movies &, string, string, int);
void incrementWatched(Movies &, string);

int main() {
    Movies myMovies;
    
    myMovies.display();
    
    cout << "===================================\n";
    addMovie(myMovies, "Joker", "R", 3);
    addMovie(myMovies, "Star Wars", "PG", 2);
    addMovie(myMovies, "The Batman", "R 15+", 3);
    cout << "===================================\n\n";
    
    myMovies.display();
    
    cout << "================================\n";
    addMovie(myMovies, "Joker", "R", 3);
    addMovie(myMovies, "Ice Age", "PG", 1);
    cout << "================================\n\n";
    
    myMovies.display();
    
    cout << "=============================\n";
    incrementWatched(myMovies, "Ice Age");
    incrementWatched(myMovies, "Joker");
    cout << "=============================\n\n";
    
    myMovies.display();
    
    cout << "=================================\n";
    incrementWatched(myMovies, "The Godfather");
    cout << "=================================\n\n";
}


void addMovie(Movies &movies, string name, string rating, int watched) {
    if (movies.addMovie(name, rating, watched))
        cout << name << " a fost adaugat in lista!" << endl;
    else
        cout << name << " exista deja in lista!" << endl;
}

void incrementWatched(Movies &movies, string name) {
    if (movies.incrementWathced(name))
        cout << name << " vizionat incrementat!" << endl;
    else
        cout << name << " nu exista in lista!" << endl;
}
