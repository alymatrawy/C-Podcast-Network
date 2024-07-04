#ifndef PODIFY_H
#define PODIFY_H

#include <iostream>
#include <string>
#include "Array.h"
#include "Episode.h"
#include "Podcast.h"
#include "Search.h"

using namespace std;

class Podify{

    private:
        Array<Podcast*> podcasts;

    public:
        ~Podify();
        void addPodcast(Podcast* podcast);
        void addEpisode(Episode* episode,string podcastTitle);
        const Array<Podcast*>& getPodcasts()const;
        Podcast* getPodcast(int index)const;
        Podcast* getPodcast(string title)const;
        void getEpisodes(const Search& search,Array <Episode*>& episodes);



};


#endif