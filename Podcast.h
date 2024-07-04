#ifndef PODCAST_H
#define PODCAST_H

#include <iostream>
#include <string>
#include "Array.h"
#include "Episode.h"

using namespace std;


class Podcast{

    private:
        Array<Episode*> episodes;
        string title;
        string host;
    

    public:
        Podcast(string title, string host);
        ~Podcast();
        bool equals(const string& title)const;
        Episode* get(int index)const;
        int getSize()const;
        void print(ostream& ost) const;
        void printWithEpisodes(ostream& ost)const;
        void add(Episode* episode);
        friend ostream& operator<<(ostream& ost, const Podcast& p);




};

#endif