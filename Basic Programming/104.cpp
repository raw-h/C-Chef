/*
Little Egor is a huge movie fan. He likes watching different kinds of movies: from drama movies to comedy movies, from teen movies to horror movies. He is planning to visit cinema this weekend, but he's not sure which movie he should watch.

There are n movies to watch during this weekend. Each movie can be characterized by two integers Li and Ri, denoting the length and the rating of the corresponding movie. Egor wants to watch exactly one movie with the maximal value of Li × Ri. If there are several such movies, he would pick a one with the maximal Ri among them. If there is still a tie, he would pick the one with the minimal index among them.

Your task is to help Egor to pick a movie to watch during this weekend.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l[n], r[n];
        for(int j = 0; j < n; j++)
            cin >> l[j];
        for (int j = 0; j < n; j++)
            cin >> r[j];
        int movie_ratings[n];
        int best_movies = INT_MIN;
        for(int j = 0; j < n; j++){
            movie_ratings[j] = l[j] * r[j];
            best_movies = max(movie_ratings[j], best_movies);
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(movie_ratings[j] == best_movies)
                count++;
        }
        int indices[count], k = 0;
        for (int j = 0; j < n; j++)
        {
            if(movie_ratings[j] == best_movies){
                indices[k] = j;
                k++;
            }
        }
        int highest_rating = INT_MIN;
        int min_index = INT_MAX;
        for (int j = 0; j < count; j++)
        {
            highest_rating = max(r[indices[j]], highest_rating);
        }
        for (int j = 0; j < count; j++)
        {
            if(r[indices[j]] == highest_rating)
                min_index = min(min_index, indices[j]);
        }
        cout << min_index + 1 << endl;
    }
    return 0;
}